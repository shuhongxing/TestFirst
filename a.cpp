/// <summary>
/// 最大公约数
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
public static int GCD(int a, int b)
{
int gcd = 1;
int min = a > b ? b : a;
for (int i = min; i >= 1; i--)
{
if (a % i == 0 && b % i == 0)
{
gcd = i;
break;
}
}
return gcd;
}
/// <summary>
/// 最小公倍数
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
public static int LCM(int a, int b)
{
int lcm = a * b;
int max = a > b ? a : b;
for (int i = max, len = a * b; i <= len; i++)
{
if (i % a == 0 && i % b == 0)
{
lcm = i;
break;
}
}
return lcm;
}