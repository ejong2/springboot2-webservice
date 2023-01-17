package _chap_08;

import _chap_08.camera.SpeedCam;
import _chap_08.detector.AccidentDector;
import _chap_08.reporter.VideoReporter;

public class _Quiz_ {
    public static void main(String[] args) {
        SpeedCam speedCam = new SpeedCam();
        speedCam.setDetector(new AccidentDector());
        speedCam.setReporter(new VideoReporter());
        speedCam.detect();
        speedCam.report();

    }
}
