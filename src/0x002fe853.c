/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDEDA41B5AAB23D5F0E6D5418BDE779046E5EA1AEAB8ED69B2A9F91793113B9A
 * Entry: 0x002fe853, Ghidra index: 11033, label: _wcsncmp
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _wcsncmp
   
   Library: Visual Studio 2003 Release */

int __cdecl _wcsncmp(wchar_t *__s1,wchar_t *__s2,size_t __n)

{
  if (__n != 0) {
    for (; ((__n = __n - 1, __n != 0 && (*__s1 != L'\0')) && (*__s1 == *__s2)); __s1 = __s1 + 1) {
      __s2 = __s2 + 1;
    }
    return (uint)(ushort)*__s1 - (uint)(ushort)*__s2;
  }
  return 0;
}
