package _chap_07.Camera;

public class Super {
    public static void main(String[] args) {
        FactoryCam factoryCam = new FactoryCam();
        SpeedCam speedCam = new SpeedCam();

        factoryCam.recordVideo();
        System.out.println("-------------------");
        speedCam.takePicture();
    }
}
