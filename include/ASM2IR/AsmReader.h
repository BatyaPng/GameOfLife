#ifndef ASM_READER_H
#define ASM_READER_H

#include "llvm/ExecutionEngine/ExecutionEngine.h"
#include "llvm/ExecutionEngine/GenericValue.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Verifier.h"
#include "llvm/Support/FormatVariadic.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Support/raw_ostream.h"
#include <fstream>
#include <optional>
#include <unordered_map>

#include "sim.h"

class AsmReader {
  llvm::LLVMContext Context;
  llvm::Module *M;
  llvm::Function *MainFunc;
  llvm::GlobalVariable *RegFileGlobal;
  static constexpr auto RegFileSize = 32;
  static uint32_t RegFile[RegFileSize];

  // All instructions:
  enum class ISA {
    // 1. ADDI rd rs1 imm
    ADDI,
    // 2. ADD rd rs1 rs2
    ADD,
    // 3. XOR rd rs1 rs2
    XOR,
    // 4. SETEQ rd rs1 rs2
    SETEQ,
    // 5. SETLT rd rs1 rs2
    SETLT,
    // 6. BR rs label
    BR,
    // 7. FLUSH
    FLUSH,
    // 8. PUT_PIXEL rs1 rs2 rs3
    PUT_PIXEL,
    // 9. EXIT
    EXIT,
  };

public:
  void parseAsm(std::ifstream &Input);
  void execute() const;
  void dumpIR() const;
  bool verifyIR() const;
  int getNumOps(const std::string &Opcode) const;

  static void executeXOR(int Rd, int Rs1, int Rs2) {
    RegFile[Rd] = RegFile[Rs1] ^ RegFile[Rs2];
  }

  static void executeADDI(int Rd, int Rs1, int Rs2) {
    RegFile[Rd] = RegFile[Rs1] + Rs2;
  }

  static void executeADD(int Rd, int Rs1, int Rs2) {
    RegFile[Rd] = RegFile[Rs1] + RegFile[Rs2];
  }

  static void executePUT_PIXEL(int Rd, int Rs1, int Rs2) {
    simPutPixel(RegFile[Rd], RegFile[Rs1], Rs2);
  }

  static void executeSETEQ(int Rd, int Rs1, int Rs2) {
    RegFile[Rd] = (RegFile[Rs1] == RegFile[Rs2]);
  }

  static void executeSETLT(int Rd, int Rs1, int Rs2) {
    RegFile[Rd] = (RegFile[Rs1] < RegFile[Rs2]);
  }

  static void executeFLUSH() { simFlush(); }
};

#endif // EXTIR_H
