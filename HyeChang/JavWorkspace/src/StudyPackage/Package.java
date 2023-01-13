package StudyPackage;

import java.util.Random;

public class Package {
    public static void main(String[] args) {

        // 패키지 (랜덤 클래스)
        Random random = new Random();
        System.out.println("랜덤 정수 : " + random.nextInt());
        System.out.println("랜덤 정수 (범위) : " + random.nextInt(10)); // 0 ~ 10 미만
        System.out.println("랜덤 실수 (범위) : " + random.nextDouble());        // 0 ~ 1.0 미만
        System.out.println("랜덤 실수 (범위) : " + random.nextDouble());        // 0 ~ 1.0 미만
        double min = 5.0;
        double max = 10.0;
        System.out.println("랜덤 실수 (범위) : " + (min + (max - min) * random.nextDouble()));

        System.out.println("랜덤 boolean : " + random.nextBoolean());

        // 로또 번호를 랜덤으로 뽑으려면 ? 1 ~ 45

        for(int i = 0; i < 7; i++)
        {
            System.out.print(random.nextInt(45) + 1 + " ");
        }
    }
}
