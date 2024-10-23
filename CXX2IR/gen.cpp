#include <llvm/ExecutionEngine/ExecutionEngine.h>
#include <llvm/ExecutionEngine/GenericValue.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/Support/TargetSelect.h>
#include <llvm/Support/raw_ostream.h>

#include <llvm/Support/TargetSelect.h>

#include "../App/sim.h"

using namespace llvm;

auto main() -> int {
    //------------INITIALIZE------------
    llvm::InitializeNativeTarget();
    llvm::InitializeNativeTargetAsmPrinter();
    LLVMContext Ctx;
    Module *m = new Module("app", Ctx);
    IRBuilder builder(Ctx);


    auto *type_0x0000555D9CB0A068 = Type::getIntNTy(Ctx, 32);
    auto *ret_type_0 = type_0x0000555D9CB0A068;
    std::vector<Type *> args_0;
    auto *func_type_0 = FunctionType::get(ret_type_0, args_0, false);
    auto *func_0 = Function::Create(func_type_0, Function::ExternalLinkage, "simRand", m);
    auto *type_0x0000555D9CB09EE8 = Type::getVoidTy(Ctx);
    auto *ret_type_1 = type_0x0000555D9CB09EE8;
    std::vector<Type *> args_1;
    args_1.push_back(type_0x0000555D9CB0A068);
    args_1.push_back(type_0x0000555D9CB0A068);
    args_1.push_back(type_0x0000555D9CB0A068);
    auto *func_type_1 = FunctionType::get(ret_type_1, args_1, false);
    auto *func_1 = Function::Create(func_type_1, Function::ExternalLinkage, "simPutPixel", m);
    auto *ret_type_2 = type_0x0000555D9CB09EE8;
    std::vector<Type *> args_2;
    auto *func_type_2 = FunctionType::get(ret_type_2, args_2, false);
    auto *func_2 = Function::Create(func_type_2, Function::ExternalLinkage, "simFlush", m);
    auto *ret_type_3 = type_0x0000555D9CB09EE8;
    std::vector<Type *> args_3;
    auto *func_type_3 = FunctionType::get(ret_type_3, args_3, false);
    auto *func_3 = Function::Create(func_type_3, Function::ExternalLinkage, "app", m);
    auto *bb_4 = BasicBlock::Create(Ctx, "", func_3);
    auto *bb_5 = BasicBlock::Create(Ctx, "", func_3);
    auto *bb_6 = BasicBlock::Create(Ctx, "", func_3);
    auto *bb_7 = BasicBlock::Create(Ctx, "", func_3);
    auto *bb_8 = BasicBlock::Create(Ctx, "", func_3);
    auto *bb_9 = BasicBlock::Create(Ctx, "", func_3);
    auto *bb_10 = BasicBlock::Create(Ctx, "", func_3);
    auto *bb_11 = BasicBlock::Create(Ctx, "", func_3);
    /*
      %1 = tail call i32 (...) @simRand() #2
    */
    builder.SetInsertPoint(bb_4);
    auto *op_0_12 = func_type_0;
    auto *op_1_12 = func_0;
    std::vector<Value *> op_2_12;
    auto *instr_12 = builder.CreateCall(op_0_12, op_1_12, op_2_12);
    /*
      %2 = srem i32 %1, 620
    */
    builder.SetInsertPoint(bb_4);
    auto *op_0_13 = instr_12;
    auto *op_1_13 = ConstantInt::get(Ctx, APInt(32, 620));
    auto *instr_13 = builder.CreateSRem(op_0_13, op_1_13);
    /*
      %3 = tail call i32 (...) @simRand() #2
    */
    builder.SetInsertPoint(bb_4);
    auto *op_0_14 = func_type_0;
    auto *op_1_14 = func_0;
    std::vector<Value *> op_2_14;
    auto *instr_14 = builder.CreateCall(op_0_14, op_1_14, op_2_14);
    /*
      %4 = srem i32 %3, 460
    */
    builder.SetInsertPoint(bb_4);
    auto *op_0_15 = instr_14;
    auto *op_1_15 = ConstantInt::get(Ctx, APInt(32, 460));
    auto *instr_15 = builder.CreateSRem(op_0_15, op_1_15);
    /*
      br label %5
    */
    builder.SetInsertPoint(bb_4);
    auto *op_0_16 = bb_5;
    auto *instr_16 = builder.CreateBr(op_0_16);
    /*
      %6 = phi i32 [ %2, %0 ], [ %53, %44 ]
    */
    builder.SetInsertPoint(bb_5);
    auto *phi_ty_17 = type_0x0000555D9CB0A068;
    auto *phi_17 = builder.CreatePHI(phi_ty_17, 2, "");
    auto *instr_17 = phi_17;
    /*
      %7 = phi i32 [ %4, %0 ], [ %61, %44 ]
    */
    builder.SetInsertPoint(bb_5);
    auto *phi_ty_18 = type_0x0000555D9CB0A068;
    auto *phi_18 = builder.CreatePHI(phi_ty_18, 2, "");
    auto *instr_18 = phi_18;
    /*
      %8 = phi i32 [ 3, %0 ], [ %54, %44 ]
    */
    builder.SetInsertPoint(bb_5);
    auto *phi_ty_19 = type_0x0000555D9CB0A068;
    auto *phi_19 = builder.CreatePHI(phi_ty_19, 2, "");
    auto *instr_19 = phi_19;
    /*
      %9 = phi i32 [ 2, %0 ], [ %62, %44 ]
    */
    builder.SetInsertPoint(bb_5);
    auto *phi_ty_20 = type_0x0000555D9CB0A068;
    auto *phi_20 = builder.CreatePHI(phi_ty_20, 2, "");
    auto *instr_20 = phi_20;
    /*
      br label %10
    */
    builder.SetInsertPoint(bb_5);
    auto *op_0_21 = bb_6;
    auto *instr_21 = builder.CreateBr(op_0_21);
    /*
      %11 = phi i32 [ 0, %5 ], [ %13, %12 ]
    */
    builder.SetInsertPoint(bb_6);
    auto *phi_ty_22 = type_0x0000555D9CB0A068;
    auto *phi_22 = builder.CreatePHI(phi_ty_22, 2, "");
    auto *instr_22 = phi_22;
    /*
      br label %35
    */
    builder.SetInsertPoint(bb_6);
    auto *op_0_23 = bb_9;
    auto *instr_23 = builder.CreateBr(op_0_23);
    /*
      %13 = add nuw nsw i32 %11, 1
    */
    builder.SetInsertPoint(bb_7);
    auto *op_0_24 = instr_22;
    auto *op_1_24 = ConstantInt::get(Ctx, APInt(32, 1));
    auto *instr_24 = builder.CreateAdd(op_0_24, op_1_24);
    dyn_cast<Instruction>(instr_24)->setHasNoUnsignedWrap();
    dyn_cast<Instruction>(instr_24)->setHasNoSignedWrap();
    /*
      %14 = icmp eq i32 %13, 640
    */
    builder.SetInsertPoint(bb_7);
    auto op_0_25 = CmpInst::Predicate::ICMP_EQ;
    auto *op_1_25 = instr_24;
    auto *op_2_25 = ConstantInt::get(Ctx, APInt(32, 640));
    auto *instr_25 = builder.CreateICmp(op_0_25, op_1_25, op_2_25);
    /*
      br i1 %14, label %15, label %10, !llvm.loop !5
    */
    builder.SetInsertPoint(bb_7);
    auto *op_0_26 = instr_25;
    auto *op_1_26 = bb_8;
    auto *op_2_26 = bb_6;
    auto *instr_26 = builder.CreateCondBr(op_0_26, op_1_26, op_2_26);
    /*
      %16 = add nsw i32 %7, 1
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_27 = instr_18;
    auto *op_1_27 = ConstantInt::get(Ctx, APInt(32, 1));
    auto *instr_27 = builder.CreateAdd(op_0_27, op_1_27);
    dyn_cast<Instruction>(instr_27)->setHasNoSignedWrap();
    /*
      %17 = add nsw i32 %7, 2
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_28 = instr_18;
    auto *op_1_28 = ConstantInt::get(Ctx, APInt(32, 2));
    auto *instr_28 = builder.CreateAdd(op_0_28, op_1_28);
    dyn_cast<Instruction>(instr_28)->setHasNoSignedWrap();
    /*
      %18 = add nsw i32 %7, 3
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_29 = instr_18;
    auto *op_1_29 = ConstantInt::get(Ctx, APInt(32, 3));
    auto *instr_29 = builder.CreateAdd(op_0_29, op_1_29);
    dyn_cast<Instruction>(instr_29)->setHasNoSignedWrap();
    /*
      %19 = add nsw i32 %7, 4
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_30 = instr_18;
    auto *op_1_30 = ConstantInt::get(Ctx, APInt(32, 4));
    auto *instr_30 = builder.CreateAdd(op_0_30, op_1_30);
    dyn_cast<Instruction>(instr_30)->setHasNoSignedWrap();
    /*
      %20 = add nsw i32 %7, 5
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_31 = instr_18;
    auto *op_1_31 = ConstantInt::get(Ctx, APInt(32, 5));
    auto *instr_31 = builder.CreateAdd(op_0_31, op_1_31);
    dyn_cast<Instruction>(instr_31)->setHasNoSignedWrap();
    /*
      %21 = add nsw i32 %7, 6
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_32 = instr_18;
    auto *op_1_32 = ConstantInt::get(Ctx, APInt(32, 6));
    auto *instr_32 = builder.CreateAdd(op_0_32, op_1_32);
    dyn_cast<Instruction>(instr_32)->setHasNoSignedWrap();
    /*
      %22 = add nsw i32 %7, 7
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_33 = instr_18;
    auto *op_1_33 = ConstantInt::get(Ctx, APInt(32, 7));
    auto *instr_33 = builder.CreateAdd(op_0_33, op_1_33);
    dyn_cast<Instruction>(instr_33)->setHasNoSignedWrap();
    /*
      %23 = add nsw i32 %7, 8
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_34 = instr_18;
    auto *op_1_34 = ConstantInt::get(Ctx, APInt(32, 8));
    auto *instr_34 = builder.CreateAdd(op_0_34, op_1_34);
    dyn_cast<Instruction>(instr_34)->setHasNoSignedWrap();
    /*
      %24 = add nsw i32 %7, 9
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_35 = instr_18;
    auto *op_1_35 = ConstantInt::get(Ctx, APInt(32, 9));
    auto *instr_35 = builder.CreateAdd(op_0_35, op_1_35);
    dyn_cast<Instruction>(instr_35)->setHasNoSignedWrap();
    /*
      %25 = add nsw i32 %7, 10
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_36 = instr_18;
    auto *op_1_36 = ConstantInt::get(Ctx, APInt(32, 10));
    auto *instr_36 = builder.CreateAdd(op_0_36, op_1_36);
    dyn_cast<Instruction>(instr_36)->setHasNoSignedWrap();
    /*
      %26 = add nsw i32 %7, 11
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_37 = instr_18;
    auto *op_1_37 = ConstantInt::get(Ctx, APInt(32, 11));
    auto *instr_37 = builder.CreateAdd(op_0_37, op_1_37);
    dyn_cast<Instruction>(instr_37)->setHasNoSignedWrap();
    /*
      %27 = add nsw i32 %7, 12
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_38 = instr_18;
    auto *op_1_38 = ConstantInt::get(Ctx, APInt(32, 12));
    auto *instr_38 = builder.CreateAdd(op_0_38, op_1_38);
    dyn_cast<Instruction>(instr_38)->setHasNoSignedWrap();
    /*
      %28 = add nsw i32 %7, 13
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_39 = instr_18;
    auto *op_1_39 = ConstantInt::get(Ctx, APInt(32, 13));
    auto *instr_39 = builder.CreateAdd(op_0_39, op_1_39);
    dyn_cast<Instruction>(instr_39)->setHasNoSignedWrap();
    /*
      %29 = add nsw i32 %7, 14
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_40 = instr_18;
    auto *op_1_40 = ConstantInt::get(Ctx, APInt(32, 14));
    auto *instr_40 = builder.CreateAdd(op_0_40, op_1_40);
    dyn_cast<Instruction>(instr_40)->setHasNoSignedWrap();
    /*
      %30 = add nsw i32 %7, 15
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_41 = instr_18;
    auto *op_1_41 = ConstantInt::get(Ctx, APInt(32, 15));
    auto *instr_41 = builder.CreateAdd(op_0_41, op_1_41);
    dyn_cast<Instruction>(instr_41)->setHasNoSignedWrap();
    /*
      %31 = add nsw i32 %7, 16
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_42 = instr_18;
    auto *op_1_42 = ConstantInt::get(Ctx, APInt(32, 16));
    auto *instr_42 = builder.CreateAdd(op_0_42, op_1_42);
    dyn_cast<Instruction>(instr_42)->setHasNoSignedWrap();
    /*
      %32 = add nsw i32 %7, 17
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_43 = instr_18;
    auto *op_1_43 = ConstantInt::get(Ctx, APInt(32, 17));
    auto *instr_43 = builder.CreateAdd(op_0_43, op_1_43);
    dyn_cast<Instruction>(instr_43)->setHasNoSignedWrap();
    /*
      %33 = add nsw i32 %7, 18
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_44 = instr_18;
    auto *op_1_44 = ConstantInt::get(Ctx, APInt(32, 18));
    auto *instr_44 = builder.CreateAdd(op_0_44, op_1_44);
    dyn_cast<Instruction>(instr_44)->setHasNoSignedWrap();
    /*
      %34 = add nsw i32 %7, 19
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_45 = instr_18;
    auto *op_1_45 = ConstantInt::get(Ctx, APInt(32, 19));
    auto *instr_45 = builder.CreateAdd(op_0_45, op_1_45);
    dyn_cast<Instruction>(instr_45)->setHasNoSignedWrap();
    /*
      br label %39
    */
    builder.SetInsertPoint(bb_8);
    auto *op_0_46 = bb_10;
    auto *instr_46 = builder.CreateBr(op_0_46);
    /*
      %36 = phi i32 [ 0, %10 ], [ %37, %35 ]
    */
    builder.SetInsertPoint(bb_9);
    auto *phi_ty_47 = type_0x0000555D9CB0A068;
    auto *phi_47 = builder.CreatePHI(phi_ty_47, 2, "");
    auto *instr_47 = phi_47;
    /*
      tail call void @simPutPixel(i32 noundef %11, i32 noundef %36, i32 noundef 0) #2
    */
    builder.SetInsertPoint(bb_9);
    auto *op_0_48 = func_type_1;
    auto *op_1_48 = func_1;
    std::vector<Value *> op_2_48;
    auto *op_3_48 = instr_22;
    auto *op_4_48 = instr_47;
    auto *op_5_48 = ConstantInt::get(Ctx, APInt(32, 0));
    op_2_48.push_back(op_3_48);
    op_2_48.push_back(op_4_48);
    op_2_48.push_back(op_5_48);
    auto *instr_48 = builder.CreateCall(op_0_48, op_1_48, op_2_48);
    /*
      %37 = add nuw nsw i32 %36, 1
    */
    builder.SetInsertPoint(bb_9);
    auto *op_0_49 = instr_47;
    auto *op_1_49 = ConstantInt::get(Ctx, APInt(32, 1));
    auto *instr_49 = builder.CreateAdd(op_0_49, op_1_49);
    dyn_cast<Instruction>(instr_49)->setHasNoUnsignedWrap();
    dyn_cast<Instruction>(instr_49)->setHasNoSignedWrap();
    /*
      %38 = icmp eq i32 %37, 480
    */
    builder.SetInsertPoint(bb_9);
    auto op_0_50 = CmpInst::Predicate::ICMP_EQ;
    auto *op_1_50 = instr_49;
    auto *op_2_50 = ConstantInt::get(Ctx, APInt(32, 480));
    auto *instr_50 = builder.CreateICmp(op_0_50, op_1_50, op_2_50);
    /*
      br i1 %38, label %12, label %35, !llvm.loop !7
    */
    builder.SetInsertPoint(bb_9);
    auto *op_0_51 = instr_50;
    auto *op_1_51 = bb_7;
    auto *op_2_51 = bb_9;
    auto *instr_51 = builder.CreateCondBr(op_0_51, op_1_51, op_2_51);
    /*
      %40 = phi i32 [ %42, %39 ], [ 0, %15 ]
    */
    builder.SetInsertPoint(bb_10);
    auto *phi_ty_52 = type_0x0000555D9CB0A068;
    auto *phi_52 = builder.CreatePHI(phi_ty_52, 2, "");
    auto *instr_52 = phi_52;
    /*
      %41 = add nsw i32 %40, %6
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_53 = instr_52;
    auto *op_1_53 = instr_17;
    auto *instr_53 = builder.CreateAdd(op_0_53, op_1_53);
    dyn_cast<Instruction>(instr_53)->setHasNoSignedWrap();
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %7, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_54 = func_type_1;
    auto *op_1_54 = func_1;
    std::vector<Value *> op_2_54;
    auto *op_3_54 = instr_53;
    auto *op_4_54 = instr_18;
    auto *op_5_54 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_54.push_back(op_3_54);
    op_2_54.push_back(op_4_54);
    op_2_54.push_back(op_5_54);
    auto *instr_54 = builder.CreateCall(op_0_54, op_1_54, op_2_54);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %16, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_55 = func_type_1;
    auto *op_1_55 = func_1;
    std::vector<Value *> op_2_55;
    auto *op_3_55 = instr_53;
    auto *op_4_55 = instr_27;
    auto *op_5_55 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_55.push_back(op_3_55);
    op_2_55.push_back(op_4_55);
    op_2_55.push_back(op_5_55);
    auto *instr_55 = builder.CreateCall(op_0_55, op_1_55, op_2_55);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %17, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_56 = func_type_1;
    auto *op_1_56 = func_1;
    std::vector<Value *> op_2_56;
    auto *op_3_56 = instr_53;
    auto *op_4_56 = instr_28;
    auto *op_5_56 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_56.push_back(op_3_56);
    op_2_56.push_back(op_4_56);
    op_2_56.push_back(op_5_56);
    auto *instr_56 = builder.CreateCall(op_0_56, op_1_56, op_2_56);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %18, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_57 = func_type_1;
    auto *op_1_57 = func_1;
    std::vector<Value *> op_2_57;
    auto *op_3_57 = instr_53;
    auto *op_4_57 = instr_29;
    auto *op_5_57 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_57.push_back(op_3_57);
    op_2_57.push_back(op_4_57);
    op_2_57.push_back(op_5_57);
    auto *instr_57 = builder.CreateCall(op_0_57, op_1_57, op_2_57);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %19, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_58 = func_type_1;
    auto *op_1_58 = func_1;
    std::vector<Value *> op_2_58;
    auto *op_3_58 = instr_53;
    auto *op_4_58 = instr_30;
    auto *op_5_58 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_58.push_back(op_3_58);
    op_2_58.push_back(op_4_58);
    op_2_58.push_back(op_5_58);
    auto *instr_58 = builder.CreateCall(op_0_58, op_1_58, op_2_58);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %20, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_59 = func_type_1;
    auto *op_1_59 = func_1;
    std::vector<Value *> op_2_59;
    auto *op_3_59 = instr_53;
    auto *op_4_59 = instr_31;
    auto *op_5_59 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_59.push_back(op_3_59);
    op_2_59.push_back(op_4_59);
    op_2_59.push_back(op_5_59);
    auto *instr_59 = builder.CreateCall(op_0_59, op_1_59, op_2_59);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %21, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_60 = func_type_1;
    auto *op_1_60 = func_1;
    std::vector<Value *> op_2_60;
    auto *op_3_60 = instr_53;
    auto *op_4_60 = instr_32;
    auto *op_5_60 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_60.push_back(op_3_60);
    op_2_60.push_back(op_4_60);
    op_2_60.push_back(op_5_60);
    auto *instr_60 = builder.CreateCall(op_0_60, op_1_60, op_2_60);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %22, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_61 = func_type_1;
    auto *op_1_61 = func_1;
    std::vector<Value *> op_2_61;
    auto *op_3_61 = instr_53;
    auto *op_4_61 = instr_33;
    auto *op_5_61 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_61.push_back(op_3_61);
    op_2_61.push_back(op_4_61);
    op_2_61.push_back(op_5_61);
    auto *instr_61 = builder.CreateCall(op_0_61, op_1_61, op_2_61);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %23, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_62 = func_type_1;
    auto *op_1_62 = func_1;
    std::vector<Value *> op_2_62;
    auto *op_3_62 = instr_53;
    auto *op_4_62 = instr_34;
    auto *op_5_62 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_62.push_back(op_3_62);
    op_2_62.push_back(op_4_62);
    op_2_62.push_back(op_5_62);
    auto *instr_62 = builder.CreateCall(op_0_62, op_1_62, op_2_62);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %24, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_63 = func_type_1;
    auto *op_1_63 = func_1;
    std::vector<Value *> op_2_63;
    auto *op_3_63 = instr_53;
    auto *op_4_63 = instr_35;
    auto *op_5_63 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_63.push_back(op_3_63);
    op_2_63.push_back(op_4_63);
    op_2_63.push_back(op_5_63);
    auto *instr_63 = builder.CreateCall(op_0_63, op_1_63, op_2_63);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %25, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_64 = func_type_1;
    auto *op_1_64 = func_1;
    std::vector<Value *> op_2_64;
    auto *op_3_64 = instr_53;
    auto *op_4_64 = instr_36;
    auto *op_5_64 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_64.push_back(op_3_64);
    op_2_64.push_back(op_4_64);
    op_2_64.push_back(op_5_64);
    auto *instr_64 = builder.CreateCall(op_0_64, op_1_64, op_2_64);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %26, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_65 = func_type_1;
    auto *op_1_65 = func_1;
    std::vector<Value *> op_2_65;
    auto *op_3_65 = instr_53;
    auto *op_4_65 = instr_37;
    auto *op_5_65 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_65.push_back(op_3_65);
    op_2_65.push_back(op_4_65);
    op_2_65.push_back(op_5_65);
    auto *instr_65 = builder.CreateCall(op_0_65, op_1_65, op_2_65);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %27, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_66 = func_type_1;
    auto *op_1_66 = func_1;
    std::vector<Value *> op_2_66;
    auto *op_3_66 = instr_53;
    auto *op_4_66 = instr_38;
    auto *op_5_66 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_66.push_back(op_3_66);
    op_2_66.push_back(op_4_66);
    op_2_66.push_back(op_5_66);
    auto *instr_66 = builder.CreateCall(op_0_66, op_1_66, op_2_66);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %28, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_67 = func_type_1;
    auto *op_1_67 = func_1;
    std::vector<Value *> op_2_67;
    auto *op_3_67 = instr_53;
    auto *op_4_67 = instr_39;
    auto *op_5_67 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_67.push_back(op_3_67);
    op_2_67.push_back(op_4_67);
    op_2_67.push_back(op_5_67);
    auto *instr_67 = builder.CreateCall(op_0_67, op_1_67, op_2_67);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %29, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_68 = func_type_1;
    auto *op_1_68 = func_1;
    std::vector<Value *> op_2_68;
    auto *op_3_68 = instr_53;
    auto *op_4_68 = instr_40;
    auto *op_5_68 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_68.push_back(op_3_68);
    op_2_68.push_back(op_4_68);
    op_2_68.push_back(op_5_68);
    auto *instr_68 = builder.CreateCall(op_0_68, op_1_68, op_2_68);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %30, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_69 = func_type_1;
    auto *op_1_69 = func_1;
    std::vector<Value *> op_2_69;
    auto *op_3_69 = instr_53;
    auto *op_4_69 = instr_41;
    auto *op_5_69 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_69.push_back(op_3_69);
    op_2_69.push_back(op_4_69);
    op_2_69.push_back(op_5_69);
    auto *instr_69 = builder.CreateCall(op_0_69, op_1_69, op_2_69);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %31, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_70 = func_type_1;
    auto *op_1_70 = func_1;
    std::vector<Value *> op_2_70;
    auto *op_3_70 = instr_53;
    auto *op_4_70 = instr_42;
    auto *op_5_70 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_70.push_back(op_3_70);
    op_2_70.push_back(op_4_70);
    op_2_70.push_back(op_5_70);
    auto *instr_70 = builder.CreateCall(op_0_70, op_1_70, op_2_70);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %32, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_71 = func_type_1;
    auto *op_1_71 = func_1;
    std::vector<Value *> op_2_71;
    auto *op_3_71 = instr_53;
    auto *op_4_71 = instr_43;
    auto *op_5_71 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_71.push_back(op_3_71);
    op_2_71.push_back(op_4_71);
    op_2_71.push_back(op_5_71);
    auto *instr_71 = builder.CreateCall(op_0_71, op_1_71, op_2_71);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %33, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_72 = func_type_1;
    auto *op_1_72 = func_1;
    std::vector<Value *> op_2_72;
    auto *op_3_72 = instr_53;
    auto *op_4_72 = instr_44;
    auto *op_5_72 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_72.push_back(op_3_72);
    op_2_72.push_back(op_4_72);
    op_2_72.push_back(op_5_72);
    auto *instr_72 = builder.CreateCall(op_0_72, op_1_72, op_2_72);
    /*
      tail call void @simPutPixel(i32 noundef %41, i32 noundef %34, i32 noundef -1) #2
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_73 = func_type_1;
    auto *op_1_73 = func_1;
    std::vector<Value *> op_2_73;
    auto *op_3_73 = instr_53;
    auto *op_4_73 = instr_45;
    auto *op_5_73 = ConstantInt::get(Ctx, APInt(32, 4294967295));
    op_2_73.push_back(op_3_73);
    op_2_73.push_back(op_4_73);
    op_2_73.push_back(op_5_73);
    auto *instr_73 = builder.CreateCall(op_0_73, op_1_73, op_2_73);
    /*
      %42 = add nuw nsw i32 %40, 1
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_74 = instr_52;
    auto *op_1_74 = ConstantInt::get(Ctx, APInt(32, 1));
    auto *instr_74 = builder.CreateAdd(op_0_74, op_1_74);
    dyn_cast<Instruction>(instr_74)->setHasNoUnsignedWrap();
    dyn_cast<Instruction>(instr_74)->setHasNoSignedWrap();
    /*
      %43 = icmp eq i32 %42, 20
    */
    builder.SetInsertPoint(bb_10);
    auto op_0_75 = CmpInst::Predicate::ICMP_EQ;
    auto *op_1_75 = instr_74;
    auto *op_2_75 = ConstantInt::get(Ctx, APInt(32, 20));
    auto *instr_75 = builder.CreateICmp(op_0_75, op_1_75, op_2_75);
    /*
      br i1 %43, label %44, label %39, !llvm.loop !8
    */
    builder.SetInsertPoint(bb_10);
    auto *op_0_76 = instr_75;
    auto *op_1_76 = bb_11;
    auto *op_2_76 = bb_10;
    auto *instr_76 = builder.CreateCondBr(op_0_76, op_1_76, op_2_76);
    /*
      %45 = add nsw i32 %8, %6
    */
    builder.SetInsertPoint(bb_11);
    auto *op_0_77 = instr_19;
    auto *op_1_77 = instr_17;
    auto *instr_77 = builder.CreateAdd(op_0_77, op_1_77);
    dyn_cast<Instruction>(instr_77)->setHasNoSignedWrap();
    /*
      %46 = add nsw i32 %9, %7
    */
    builder.SetInsertPoint(bb_11);
    auto *op_0_78 = instr_20;
    auto *op_1_78 = instr_18;
    auto *instr_78 = builder.CreateAdd(op_0_78, op_1_78);
    dyn_cast<Instruction>(instr_78)->setHasNoSignedWrap();
    /*
      %47 = icmp slt i32 %45, 0
    */
    builder.SetInsertPoint(bb_11);
    auto op_0_79 = CmpInst::Predicate::ICMP_SLT;
    auto *op_1_79 = instr_77;
    auto *op_2_79 = ConstantInt::get(Ctx, APInt(32, 0));
    auto *instr_79 = builder.CreateICmp(op_0_79, op_1_79, op_2_79);
    /*
      %48 = sub nsw i32 0, %8
    */
    builder.SetInsertPoint(bb_11);
    auto *op_0_80 = ConstantInt::get(Ctx, APInt(32, 0));
    auto *op_1_80 = instr_19;
    auto *instr_80 = builder.CreateSub(op_0_80, op_1_80);
    dyn_cast<Instruction>(instr_80)->setHasNoSignedWrap();
    /*
      %49 = select i1 %47, i32 0, i32 %45
    */
    builder.SetInsertPoint(bb_11);
    auto *op_0_81 = instr_79;
    auto *op_1_81 = ConstantInt::get(Ctx, APInt(32, 0));
    auto *op_2_81 = instr_77;
    auto *instr_81 = builder.CreateSelect(op_0_81, op_1_81, op_2_81);
    /*
      %50 = select i1 %47, i32 %48, i32 %8
    */
    builder.SetInsertPoint(bb_11);
    auto *op_0_82 = instr_79;
    auto *op_1_82 = instr_80;
    auto *op_2_82 = instr_19;
    auto *instr_82 = builder.CreateSelect(op_0_82, op_1_82, op_2_82);
    /*
      %51 = icmp ugt i32 %49, 620
    */
    builder.SetInsertPoint(bb_11);
    auto op_0_83 = CmpInst::Predicate::ICMP_UGT;
    auto *op_1_83 = instr_81;
    auto *op_2_83 = ConstantInt::get(Ctx, APInt(32, 620));
    auto *instr_83 = builder.CreateICmp(op_0_83, op_1_83, op_2_83);
    /*
      %52 = sub nsw i32 0, %50
    */
    builder.SetInsertPoint(bb_11);
    auto *op_0_84 = ConstantInt::get(Ctx, APInt(32, 0));
    auto *op_1_84 = instr_82;
    auto *instr_84 = builder.CreateSub(op_0_84, op_1_84);
    dyn_cast<Instruction>(instr_84)->setHasNoSignedWrap();
    /*
      %53 = select i1 %51, i32 620, i32 %49
    */
    builder.SetInsertPoint(bb_11);
    auto *op_0_85 = instr_83;
    auto *op_1_85 = ConstantInt::get(Ctx, APInt(32, 620));
    auto *op_2_85 = instr_81;
    auto *instr_85 = builder.CreateSelect(op_0_85, op_1_85, op_2_85);
    /*
      %54 = select i1 %51, i32 %52, i32 %50
    */
    builder.SetInsertPoint(bb_11);
    auto *op_0_86 = instr_83;
    auto *op_1_86 = instr_84;
    auto *op_2_86 = instr_82;
    auto *instr_86 = builder.CreateSelect(op_0_86, op_1_86, op_2_86);
    /*
      %55 = icmp slt i32 %46, 0
    */
    builder.SetInsertPoint(bb_11);
    auto op_0_87 = CmpInst::Predicate::ICMP_SLT;
    auto *op_1_87 = instr_78;
    auto *op_2_87 = ConstantInt::get(Ctx, APInt(32, 0));
    auto *instr_87 = builder.CreateICmp(op_0_87, op_1_87, op_2_87);
    /*
      %56 = sub nsw i32 0, %9
    */
    builder.SetInsertPoint(bb_11);
    auto *op_0_88 = ConstantInt::get(Ctx, APInt(32, 0));
    auto *op_1_88 = instr_20;
    auto *instr_88 = builder.CreateSub(op_0_88, op_1_88);
    dyn_cast<Instruction>(instr_88)->setHasNoSignedWrap();
    /*
      %57 = select i1 %55, i32 0, i32 %46
    */
    builder.SetInsertPoint(bb_11);
    auto *op_0_89 = instr_87;
    auto *op_1_89 = ConstantInt::get(Ctx, APInt(32, 0));
    auto *op_2_89 = instr_78;
    auto *instr_89 = builder.CreateSelect(op_0_89, op_1_89, op_2_89);
    /*
      %58 = select i1 %55, i32 %56, i32 %9
    */
    builder.SetInsertPoint(bb_11);
    auto *op_0_90 = instr_87;
    auto *op_1_90 = instr_88;
    auto *op_2_90 = instr_20;
    auto *instr_90 = builder.CreateSelect(op_0_90, op_1_90, op_2_90);
    /*
      %59 = icmp ugt i32 %57, 460
    */
    builder.SetInsertPoint(bb_11);
    auto op_0_91 = CmpInst::Predicate::ICMP_UGT;
    auto *op_1_91 = instr_89;
    auto *op_2_91 = ConstantInt::get(Ctx, APInt(32, 460));
    auto *instr_91 = builder.CreateICmp(op_0_91, op_1_91, op_2_91);
    /*
      %60 = sub nsw i32 0, %58
    */
    builder.SetInsertPoint(bb_11);
    auto *op_0_92 = ConstantInt::get(Ctx, APInt(32, 0));
    auto *op_1_92 = instr_90;
    auto *instr_92 = builder.CreateSub(op_0_92, op_1_92);
    dyn_cast<Instruction>(instr_92)->setHasNoSignedWrap();
    /*
      %61 = select i1 %59, i32 460, i32 %57
    */
    builder.SetInsertPoint(bb_11);
    auto *op_0_93 = instr_91;
    auto *op_1_93 = ConstantInt::get(Ctx, APInt(32, 460));
    auto *op_2_93 = instr_89;
    auto *instr_93 = builder.CreateSelect(op_0_93, op_1_93, op_2_93);
    /*
      %62 = select i1 %59, i32 %60, i32 %58
    */
    builder.SetInsertPoint(bb_11);
    auto *op_0_94 = instr_91;
    auto *op_1_94 = instr_92;
    auto *op_2_94 = instr_90;
    auto *instr_94 = builder.CreateSelect(op_0_94, op_1_94, op_2_94);
    /*
      tail call void (...) @simFlush() #2
    */
    builder.SetInsertPoint(bb_11);
    auto *op_0_95 = func_type_2;
    auto *op_1_95 = func_2;
    std::vector<Value *> op_2_95;
    auto *instr_95 = builder.CreateCall(op_0_95, op_1_95, op_2_95);
    /*
      br label %5
    */
    builder.SetInsertPoint(bb_11);
    auto *op_0_96 = bb_5;
    auto *instr_96 = builder.CreateBr(op_0_96);
    builder.SetInsertPoint(dyn_cast<Instruction>(instr_53));
    auto *op_0_52 = instr_74;
    phi_52->addIncoming(op_0_52, bb_10);
    auto *op_1_52 = ConstantInt::get(Ctx, APInt(32, 0));
    phi_52->addIncoming(op_1_52, bb_8);
    builder.SetInsertPoint(dyn_cast<Instruction>(instr_21));
    auto *op_0_20 = ConstantInt::get(Ctx, APInt(32, 2));
    phi_20->addIncoming(op_0_20, bb_4);
    auto *op_1_20 = instr_94;
    phi_20->addIncoming(op_1_20, bb_11);
    builder.SetInsertPoint(dyn_cast<Instruction>(instr_23));
    auto *op_0_22 = ConstantInt::get(Ctx, APInt(32, 0));
    phi_22->addIncoming(op_0_22, bb_5);
    auto *op_1_22 = instr_24;
    phi_22->addIncoming(op_1_22, bb_7);
    builder.SetInsertPoint(dyn_cast<Instruction>(instr_20));
    auto *op_0_19 = ConstantInt::get(Ctx, APInt(32, 3));
    phi_19->addIncoming(op_0_19, bb_4);
    auto *op_1_19 = instr_86;
    phi_19->addIncoming(op_1_19, bb_11);
    builder.SetInsertPoint(dyn_cast<Instruction>(instr_19));
    auto *op_0_18 = instr_15;
    phi_18->addIncoming(op_0_18, bb_4);
    auto *op_1_18 = instr_93;
    phi_18->addIncoming(op_1_18, bb_11);
    builder.SetInsertPoint(dyn_cast<Instruction>(instr_48));
    auto *op_0_47 = ConstantInt::get(Ctx, APInt(32, 0));
    phi_47->addIncoming(op_0_47, bb_6);
    auto *op_1_47 = instr_49;
    phi_47->addIncoming(op_1_47, bb_9);
    builder.SetInsertPoint(dyn_cast<Instruction>(instr_18));
    auto *op_0_17 = instr_13;
    phi_17->addIncoming(op_0_17, bb_4);
    auto *op_1_17 = instr_85;
    phi_17->addIncoming(op_1_17, bb_11);

    //------------INTERPRETATION------------
    ExecutionEngine *EE = EngineBuilder(std::unique_ptr<Module>(m)).create();
    EE->InstallLazyFunctionCreator([&](const std::string &FuncName) -> void * {
      if (FuncName == "simFlush") {
        return reinterpret_cast<void *>(simFlush);
      }
      if (FuncName == "simPutPixel") {
        return reinterpret_cast<void *>(simPutPixel);
      }
      return nullptr;
    });
    EE->finalizeObject();
  
    simInit();
  
    ArrayRef<GenericValue> NoArgs;
    EE->runFunction(func_3, NoArgs);
  
    simExit();
    return EXIT_SUCCESS;
}
