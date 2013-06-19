#!/bin/bash
RESOLUTION="640*480"
FRAMERATE="30"
MJPG_WEB_ROOT="/home/jx/mjpg-streamer/mjpg-streamer/www"
PORT="8080"

./mjpg_streamer -i "input_uvc.so -d /dev/video0 -y -f $FRAME_RATE -r $RESOLUTION" -o "output_http.so -w $MJPG_WEB_ROOT"
