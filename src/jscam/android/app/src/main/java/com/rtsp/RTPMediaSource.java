package com.rtsp;
import android.net.Uri;

import com.google.android.exoplayer2.ExoPlayer;
import com.google.android.exoplayer2.extractor.ExtractorsFactory;
import com.google.android.exoplayer2.source.BaseMediaSource;
import com.google.android.exoplayer2.source.ExtractorMediaSource;
import com.google.android.exoplayer2.source.MediaPeriod;
import com.google.android.exoplayer2.source.MediaSource;
import com.google.android.exoplayer2.source.MediaSourceEventListener;
import com.google.android.exoplayer2.upstream.Allocator;
import com.google.android.exoplayer2.upstream.DataSource;

import android.os.Handler;
import android.provider.MediaStore;

public class RTPMediaSource extends BaseMediaSource implements MediaSource{
/*
    public RTPMediaSource(Uri uri, DataSource.Factory dataSourceFactory, ExtractorsFactory extractorsFactory, Handler eventHandler, ExtractorMediaSource.EventListener eventListener)  {
        super(uri, dataSourceFactory, extractorsFactory, eventHandler, eventListener);
    }
*/
    protected void 	prepareSourceInternal(ExoPlayer player, boolean isTopLevelSource) {

    }

    protected  void 	releaseSourceInternal() {

    }

    public void 	maybeThrowSourceInfoRefreshError() {

    }

    public MediaPeriod 	createPeriod(MediaSource.MediaPeriodId id, Allocator allocator) {

    }

    public void 	releasePeriod(MediaPeriod mediaPeriod) {

    }

}