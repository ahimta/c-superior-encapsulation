# C Superior Encapsulation

A demonstration of how the C programming language can have better encapsulation
than other languages if used correctly.

## Assumptions

1. Ubuntu 20.04 LTS

## Getting Started

```bash
sudo apt install \
  build-essential \
  clang \
  gcc \
  valgrind

make clear
make

./encapsulation
valgrind --leak-check=full --track-origins=yes ./encapsulation
```

## Limitations

1. The data may have to be allocated dynamically because the required space may
   not be possible to calculate otherwise.
2. It may be possible to only hide all fields.

## Credits

[Clean Architecture book](https://www.amazon.com/dp/B075LRM681/?coliid=I1YZILGE0G789Z&colid=1GDJ9DSBBG4SA&psc=0&ref_=lv_ov_lig_dp_it)
for demonstrating this technique.
