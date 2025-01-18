var reverseWords = function(s)
{
  let str = s.trim().split(/\s + /);
  str.reverse();
  let res = str.join(" ");
  return res;
};