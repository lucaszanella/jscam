package com.rtsp;

import android.net.Uri;

import com.google.android.exoplayer2.upstream.DataSource;

import com.google.android.exoplayer2.upstream.DataSpec;

public class RTPDataSource implements DataSource {


    public long open(DataSpec dataSpec) {
        return 0;
    }

    public int read(byte[] buffer, int offset, int readLength) {
        return 0;
    }

    public Uri getUri() {
        return;
    }

    public void close() {

    }
}