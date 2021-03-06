# 解説

## ポイント

割り算の等式：a=bq+r において，
「a と b の最大公約数」
＝「b と r の最大公約数」

## 証明

gcd(a,b) = gcd(b,r)を証明する

以下証明

> a を b で割った商を q，余りを r とおくと，
> a=bq+r より，
> ・ a,b がともに m の倍数 → r=a−bq も m の倍数。
> よって「a と b の公約数」は「b と r の公約数」でもある。したがって，
> gcd(a,b)≤gcd(b,r)
> ・ b,r がともに m の倍数 → a=bq+r も m の倍数。
> よって「b と r の公約数」は「a と b の公約数」でもある。したがって，
> gcd(a,b)≥gcd(b,r)
> 以上 2 つの不等式より，gcd(a,b)=gcd(b,r)

# 参考

1. [高校数学の美しい物語](https://mathtrain.jp/euclid#:~:text=%E3%83%A6%E3%83%BC%E3%82%AF%E3%83%AA%E3%83%83%E3%83%89%E3%81%AE%E4%BA%92%E9%99%A4%E6%B3%95%EF%BC%88%E3%81%94,%E7%B4%A0%E6%97%A9%E3%81%8F%E8%A8%88%E7%AE%97%E3%81%99%E3%82%8B%E6%96%B9%E6%B3%95%E3%81%A7%E3%81%99%E3%80%82)
