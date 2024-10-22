; ModuleID = 'mymodule'
source_filename = "mymodule"

declare i32 @simRand()

declare void @simPutPixel(i32 %0, i32 %1, i32 %2)

declare void @simFlush()

define void @app() {
  %1 = call i32 @simRand()
  %2 = srem i32 %1, 620
  %3 = call i32 @simRand()
  %4 = srem i32 %3, 460
  br label %5

5:                                                ; preds = %44, %0
  %6 = phi i32 [ %2, %0 ], [ %53, %44 ]
  %7 = phi i32 [ %4, %0 ], [ %61, %44 ]
  %8 = phi i32 [ 3, %0 ], [ %54, %44 ]
  %9 = phi i32 [ 2, %0 ], [ %62, %44 ]
  br label %10

10:                                               ; preds = %12, %5
  %11 = phi i32 [ 0, %5 ], [ %13, %12 ]
  br label %35

12:                                               ; preds = %35
  %13 = add nuw nsw i32 %11, 1
  %14 = icmp eq i32 %13, 640
  br i1 %14, label %15, label %10

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

35:                                               ; preds = %35, %10
  %36 = phi i32 [ 0, %10 ], [ %37, %35 ]
  call void @simPutPixel(i32 %11, i32 %36, i32 0)
  %37 = add nuw nsw i32 %36, 1
  %38 = icmp eq i32 %37, 480
  br i1 %38, label %12, label %35

39:                                               ; preds = %39, %15
  %40 = phi i32 [ %42, %39 ], [ 0, %15 ]
  %41 = add nsw i32 %40, %6
  call void @simPutPixel(i32 %41, i32 %7, i32 -1)
  call void @simPutPixel(i32 %41, i32 %16, i32 -1)
  call void @simPutPixel(i32 %41, i32 %17, i32 -1)
  call void @simPutPixel(i32 %41, i32 %18, i32 -1)
  call void @simPutPixel(i32 %41, i32 %19, i32 -1)
  call void @simPutPixel(i32 %41, i32 %20, i32 -1)
  call void @simPutPixel(i32 %41, i32 %21, i32 -1)
  call void @simPutPixel(i32 %41, i32 %22, i32 -1)
  call void @simPutPixel(i32 %41, i32 %23, i32 -1)
  call void @simPutPixel(i32 %41, i32 %24, i32 -1)
  call void @simPutPixel(i32 %41, i32 %25, i32 -1)
  call void @simPutPixel(i32 %41, i32 %26, i32 -1)
  call void @simPutPixel(i32 %41, i32 %27, i32 -1)
  call void @simPutPixel(i32 %41, i32 %28, i32 -1)
  call void @simPutPixel(i32 %41, i32 %29, i32 -1)
  call void @simPutPixel(i32 %41, i32 %30, i32 -1)
  call void @simPutPixel(i32 %41, i32 %31, i32 -1)
  call void @simPutPixel(i32 %41, i32 %32, i32 -1)
  call void @simPutPixel(i32 %41, i32 %33, i32 -1)
  call void @simPutPixel(i32 %41, i32 %34, i32 -1)
  %42 = add nuw nsw i32 %40, 1
  %43 = icmp eq i32 %42, 20
  br i1 %43, label %44, label %39

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
  call void @simFlush()
  br label %5
}