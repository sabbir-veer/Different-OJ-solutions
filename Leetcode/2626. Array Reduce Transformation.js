var reduce = function (nums, fn, init) {
  nums.forEach(function (num) {
    init = fn(init, num);
  });
  return init;
};
