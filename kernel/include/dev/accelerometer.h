// Copyright 2016 The Fuchsia Authors
// Copyright (c) 2015 Eric Holland
//
// Use of this source code is governed by a MIT-style
// license that can be found in the LICENSE file or at
// https://opensource.org/licenses/MIT

#ifndef __DEV_ACCELEROMETER_H
#define __DEV_ACCELEROMETER_H
typedef struct {
    double x;
    double y;
    double z;
} position_vector_t;

status_t acc_read_xyz(position_vector_t *pos_vector);

#endif
