# Pythonを知っている人向けのC++入門

## このドキュメントについて

これは、ある程度Pythonを使ったことがある人向けのC++入門である。目的は、Pythonをぼんやり知っている人が、C++を使って困らないようにすることだ。読者としては、大学でPythonの講義を受けたあと、うっかりスパコンでC++を使う研究室に入ってしまった学生さんを想定する。ここではCとC++を区別せずにまとめて「C++」として扱う。例えば、C++の標準にこだわらず、C言語の関数を断りなく使う。C++の言語仕様の理解を目的とせず、Pythonの感覚で使ったら理解できない振る舞いをしたり、よくわからないエラーが出たりするのを防ぐことが主目的である。言語仕様についてはかなりいい加減に扱うため、きっちりした扱いを望む人は、他のドキュメント、例えば[江添さんのC++入門](https://ezoeryou.github.io/cpp-intro/)を参照されたい。

## [C++の概要](about/README.md)

* コンパイルとリンク
* main関数
* プログラムのスタイル
* 変数や関数の宣言
* C++のバージョン

## [変数宣言とスコープ](scope/README.md)

* 変数の宣言
* スコープ
* グローバル変数の扱い
* switch文
* 変数宣言の位置とfor文

## 関数の宣言

* 関数の宣言
* 引数と返り値
* 値渡しと参照渡し

## [ヘッダファイル](header/README.md)

* 関数呼び出しとアドレス
* 分割コンパイル
* プリプロセッサ
* まとめ

## [ポインタと配列](pointer/README.md)

* 変数とメモリ
* 変数のアドレス
* ポインタ
* ポインタのデリファレンス
* 配列

## [スタック領域とヒープ領域](stack/README.md)

* 問題を起こす例
* ヒープ領域
* スタック領域
* 関数の再帰

## 多次元配列

* Row-majorとColumn-major
* 多次元配列とポインタ
* newやmallocによる実現に触れる？

執筆予定(予定は未定)

* プリプロセッサ
* 分割コンパイルとmakeファイル
* インラインアセンブリ
* 組み込み関数
* MPI

## [C++の闇](darkness/README.md)

* ヌルポインタのデリファレンス
* 返り値を返さない関数
* 無限ループは存在しない

## ライセンス

この文章と絵(pptxファイルを含む)はクリエイティブ・コモンズ 4.0 表示 ([CC-BY 4.0](https://creativecommons.org/licenses/by/4.0/))で提供する。
