//
// Created by josselin on 16/10/2019.
//
#pragma once

#include "point2d.h"
#include "box2d_iterator.h"
#include "neighb2d_iterator.h"

class box2d_iterator;
class neighb2d_iterator;


class box2d {
public:
    using point_type = point2d;
    using p_iterator_type = box2d_iterator;
    using n_iterator_type = neighb2d_iterator;
    box2d(const point_type &fp, const point_type &lp);
    ~box2d();
    const box2d& operator=(box2d&) const;

    const point_type& fp_;
    const point_type& lp_;
    box2d_iterator iterator();
    bool has(const point_type &p) const;
    int rows() const;
    int cols() const;
private:
    const int nrows, ncols;
};

