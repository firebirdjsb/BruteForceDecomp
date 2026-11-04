/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 812DE254718C0AAEED1497039BF54C655DC54710BC567EF6CD49B667030C355A
 * Entry: 0x001d9150, Ghidra index: 6455, label: FUN_001d9150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Ghidra-draft-matched declarations; original Xbox implicit registers ABI_UNVERIFIED. */
extern void FUN_0001f4f0(int param_1, uint param_2, uint param_3);
extern void FUN_0010b1e0(void);
int FUN_001d9150(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x2c) {
    FUN_0001f4f0(param_1,0,0xffffffff);
    FUN_0010b1e0();
    in_EAX = in_EAX + 0x2c;
  }
  return in_EAX;
}
