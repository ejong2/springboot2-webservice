package ClassStudyPackage;

public class Enum {
    public static void main(String[] args) {
        // 열거형 (Enum)

        Resoulution resoulution = Resoulution.HD;
        System.out.println(resoulution);

        resoulution = Resoulution.QHD;
        System.out.println(resoulution);

        System.out.println("동영상 녹화 품질");
        switch (resoulution) {
            case HD:
                System.out.println("일반 화질");
                break;
            case FHD:
                System.out.println("고화질");
                break;
            case QHD:
                System.out.println("초고화질");
                break;
        }
        resoulution = Resoulution.valueOf("UHD");
        System.out.println(resoulution);

        System.out.println("--------------------------");

        for (Resoulution myRes : Resoulution.values()) {
            System.out.println(myRes.name() + " : " + myRes.getWidth());
        }
    }
}
enum Resoulution {
    HD(1280), FHD(1920), QHD(3840);

    private final int width;

    Resoulution(int width) {
        this.width = width;
    }

    public int getWidth() {
        return width;
    }
}
