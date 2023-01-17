package _chap_11;

public class _01_TryCatch {
    public static void main(String[] args) {
        // 예외 처리
        // 오류 : 컴파일 오류, 런타임 오류 (에러 error, 예외 exception)

        try{
            // int[] arr = new int[3];
            // arr[5] = 100;

            Object obj = "test";
            System.out.println((int)obj);

        }catch (Exception e){
            System.out.println("문제 발생  -> " + e.getMessage());
            e.printStackTrace();
        }
        System.out.println("프로그램 정상 종료");
    }
}