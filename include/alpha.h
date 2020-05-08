#include <array>
#include <string>
using namespace std;

#if !defined(JPE_ALPHA_H)
#define JPE_ALPHA_H

struct JpAlpha {
  string hiragana;
  string katakana;
  string romaji;

  JpAlpha(const char *hiragana, const char *katakana, const char *romaji)
      : hiragana(hiragana), katakana(katakana), romaji(romaji) {}
};

const array<JpAlpha, 46> jpAlpha = {
    JpAlpha({"あ", "ア", "a"}),   JpAlpha({"い", "イ", "i"}),
    JpAlpha({"う", "ウ", "u"}),   JpAlpha({"え", "エ", "e"}),
    JpAlpha({"お", "オ", "o"}),   JpAlpha({"か", "カ", "ka"}),
    JpAlpha({"き", "キ", "ki"}),  JpAlpha({"く", "ク", "ku"}),
    JpAlpha({"け", "ケ", "ke"}),  JpAlpha({"こ", "コ", "ko"}),
    JpAlpha({"さ", "サ", "sa"}),  JpAlpha({"し", "シ", "shi"}),
    JpAlpha({"す", "ス", "su"}),  JpAlpha({"せ", "セ", "se"}),
    JpAlpha({"そ", "ソ", "so"}),  JpAlpha({"た", "タ", "ta"}),
    JpAlpha({"ち", "チ", "chi"}), JpAlpha({"つ", "ツ", "tsu"}),
    JpAlpha({"て", "テ", "te"}),  JpAlpha({"と", "ト", "to"}),
    JpAlpha({"な", "ナ", "na"}),  JpAlpha({"に", "ニ", "ni"}),
    JpAlpha({"ぬ", "ヌ", "nu"}),  JpAlpha({"ね", "ネ", "ne"}),
    JpAlpha({"の", "ノ", "no"}),  JpAlpha({"は", "ハ", "ha"}),
    JpAlpha({"ひ", "ヒ", "hi"}),  JpAlpha({"ふ", "フ", "fu"}),
    JpAlpha({"へ", "ヘ", "he"}),  JpAlpha({"ほ", "ホ", "ho"}),
    JpAlpha({"ま", "マ", "ma"}),  JpAlpha({"み", "ミ", "mi"}),
    JpAlpha({"む", "ム", "mu"}),  JpAlpha({"め", "メ", "me"}),
    JpAlpha({"も", "モ", "mo"}),  JpAlpha({"や", "ヤ", "ya"}),
    JpAlpha({"ゆ", "ユ", "yu"}),  JpAlpha({"よ", "ヨ", "yo"}),
    JpAlpha({"ら", "ラ", "ra"}),  JpAlpha({"り", "リ", "ri"}),
    JpAlpha({"る", "ル", "ru"}),  JpAlpha({"れ", "レ", "re"}),
    JpAlpha({"ろ", "ロ", "ro"}),  JpAlpha({"わ", "ワ", "wa"}),
    JpAlpha({"を", "ヲ", "wo"}),  JpAlpha({"ん", "ン", "n"}),
};

#endif // JPE_ALPHA_H
