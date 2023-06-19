void pre_order(v) {
    visit(v);
    pre_order(left(v));
    pre_order(right(v));
}

void in_order(v) {
    in_order(left(v));
    visit(v);
    in_order(right(v));
}

void post_order(v) {
    post_order(left(v));
    post_order(right(v));
    visit(v);
}