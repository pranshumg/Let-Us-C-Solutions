#define simple_interest(p, r, t) (((p) * (r) * (t)) / 100.0)
#define amount(p, r, t) ((p) + simple_interest(p, r, t))