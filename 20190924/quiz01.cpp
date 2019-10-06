int main() {
    int a, *b, *c, d;
    a = 10;
    b = &a;
    c = &d;
    d = *b;
    *c = d * 10;
    c = b;
    a = 200;
}
