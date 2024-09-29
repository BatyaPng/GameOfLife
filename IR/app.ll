; ModuleID = 'app.c'
source_filename = "app.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

; Function Attrs: noreturn nounwind uwtable
define dso_local void @app() local_unnamed_addr #0 {
  %1 = tail call i32 (...) @simRand() #2
  %2 = srem i32 %1, 620
  %3 = tail call i32 (...) @simRand() #2
  %4 = srem i32 %3, 460
  br label %5

5:                                                ; preds = %44, %0
  %6 = phi i32 [ %2, %0 ], [ %53, %44 ]
  %7 = phi i32 [ %4, %0 ], [ %61, %44 ]
  %8 = phi i32 [ 3, %0 ], [ %54, %44 ]
  %9 = phi i32 [ 2, %0 ], [ %62, %44 ]
  br label %10

10:                                               ; preds = %5, %12
  %11 = phi i32 [ 0, %5 ], [ %13, %12 ]
  br label %35

12:                                               ; preds = %35
  %13 = add nuw nsw i32 %11, 1
  %14 = icmp eq i32 %13, 640
  br i1 %14, label %15, label %10, !llvm.loop !5

15:                                               ; preds = %12
  %16 = add nsw i32 %7, 1
  %17 = add nsw i32 %7, 2
  %18 = add nsw i32 %7, 3
  %19 = add nsw i32 %7, 4
  %20 = add nsw i32 %7, 5
  %21 = add nsw i32 %7, 6
  %22 = add nsw i32 %7, 7
  %23 = add nsw i32 %7, 8
  %24 = add nsw i32 %7, 9
  %25 = add nsw i32 %7, 10
  %26 = add nsw i32 %7, 11
  %27 = add nsw i32 %7, 12
  %28 = add nsw i32 %7, 13
  %29 = add nsw i32 %7, 14
  %30 = add nsw i32 %7, 15
  %31 = add nsw i32 %7, 16
  %32 = add nsw i32 %7, 17
  %33 = add nsw i32 %7, 18
  %34 = add nsw i32 %7, 19
  br label %39

35:                                               ; preds = %10, %35
  %36 = phi i32 [ 0, %10 ], [ %37, %35 ]
  tail call void @simPutPixel(i32 noundef %11, i32 noundef %36, i32 noundef 0) #2
  %37 = add nuw nsw i32 %36, 1
  %38 = icmp eq i32 %37, 480
  br i1 %38, label %12, label %35, !llvm.loop !7

39:                                               ; preds = %15, %39
  %40 = phi i32 [ %42, %39 ], [ 0, %15 ]
  %41 = add nsw i32 %40, %6
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %7, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %16, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %17, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %18, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %19, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %20, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %21, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %22, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %23, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %24, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %25, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %26, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %27, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %28, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %29, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %30, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %31, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %32, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %33, i32 noundef -1) #2
  tail call void @simPutPixel(i32 noundef %41, i32 noundef %34, i32 noundef -1) #2
  %42 = add nuw nsw i32 %40, 1
  %43 = icmp eq i32 %42, 20
  br i1 %43, label %44, label %39, !llvm.loop !8

44:                                               ; preds = %39
  %45 = add nsw i32 %8, %6
  %46 = add nsw i32 %9, %7
  %47 = icmp slt i32 %45, 0
  %48 = sub nsw i32 0, %8
  %49 = select i1 %47, i32 0, i32 %45
  %50 = select i1 %47, i32 %48, i32 %8
  %51 = icmp ugt i32 %49, 620
  %52 = sub nsw i32 0, %50
  %53 = select i1 %51, i32 620, i32 %49
  %54 = select i1 %51, i32 %52, i32 %50
  %55 = icmp slt i32 %46, 0
  %56 = sub nsw i32 0, %9
  %57 = select i1 %55, i32 0, i32 %46
  %58 = select i1 %55, i32 %56, i32 %9
  %59 = icmp ugt i32 %57, 460
  %60 = sub nsw i32 0, %58
  %61 = select i1 %59, i32 460, i32 %57
  %62 = select i1 %59, i32 %60, i32 %58
  tail call void (...) @simFlush() #2
  br label %5
}

declare i32 @simRand(...) local_unnamed_addr #1

declare void @simPutPixel(i32 noundef, i32 noundef, i32 noundef) local_unnamed_addr #1

declare void @simFlush(...) local_unnamed_addr #1

attributes #0 = { noreturn nounwind uwtable "frame-pointer"="none" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { "frame-pointer"="none" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #2 = { nounwind }

!llvm.module.flags = !{!0, !1, !2, !3}
!llvm.ident = !{!4}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{i32 7, !"PIE Level", i32 2}
!3 = !{i32 7, !"uwtable", i32 1}
!4 = !{!"Ubuntu clang version 14.0.0-1ubuntu1.1"}
!5 = distinct !{!5, !6}
!6 = !{!"llvm.loop.mustprogress"}
!7 = distinct !{!7, !6}
!8 = distinct !{!8, !6}
