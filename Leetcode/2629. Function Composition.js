var compose = function (functions) {
  return function (x) {
    for (let item of functions.reverse()) {
      x = item(x);
    }
    return x;
  };
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */
