/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2CE76BDBCB81957DFF75703F172EBB3B1CEEC340B0EB9D8252C4B9070872C491
 * Entry: 0x001d8c60, Ghidra index: 6442, label: FUN_001d8c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-observed 0x001D29D0 has no explicit stack parameters;
 * incoming guest registers and object layout remain ABI_UNVERIFIED. */
extern void FUN_001d29d0(void);
int FUN_001d8c60(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x1ac) {
    FUN_001d29d0();
    in_EAX = in_EAX + 0x1ac;
  }
  return in_EAX;
}
