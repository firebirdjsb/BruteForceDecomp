#!/usr/bin/env python3
"""Keep C prose/literals out of the lexical C++ detector without hiding code."""
from pathlib import Path
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scripts"))
from check_sources import contains_cxx


class CxxHygieneTests(unittest.TestCase):
    def test_comments_and_literals_are_not_code(self):
        for source in ('/* class namespace std:: */ int x;',
                       '// using template auto\nint x;',
                       'char *s = "std::string \\"class\\"";',
                       "int x = '::';",
                       '// class \\\nnamespace also_in_comment;\nint x;'):
            with self.subTest(source=source):
                self.assertFalse(contains_cxx(source))

    def test_real_cpp_is_still_rejected(self):
        for source in ('class X {};', 'std::string value;',
                       'reinterpret_cast<int *>(value);',
                       '#include <cstdint>', 'namespace X {}',
                       '/* class */ int x; using T = int;',
                       'sta\\\ntic_cast<int>(x);',
                       'char *s = "//"; class X {};'):
            with self.subTest(source=source):
                self.assertTrue(contains_cxx(source))


if __name__ == '__main__':
    unittest.main()
