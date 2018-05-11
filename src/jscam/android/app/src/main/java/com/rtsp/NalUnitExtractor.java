package com.rtsp;

import com.google.android.exoplayer2.extractor.Extractor;
import com.google.android.exoplayer2.extractor.ExtractorInput;
import com.google.android.exoplayer2.extractor.ExtractorOutput;
import com.google.android.exoplayer2.extractor.PositionHolder;

public class NalUnitExtractor implements Extractor {
    public void init(ExtractorOutput output) {

    }

    public int read(ExtractorInput input, PositionHolder seekPosition) {
        return 0;
    }

    public void release() {

    }

    public void seek(long position, long timeUs) {

    }

    public boolean sniff(ExtractorInput input) {
        return true;
    }
}