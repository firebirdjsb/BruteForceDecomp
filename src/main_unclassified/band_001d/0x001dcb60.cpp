/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F2EFAC2DABDA3A23E9E250EEFD87908D00F9BBA6C81585932F37EDC710F1DD3
 * Entry: 0x001dcb60, Ghidra index: 6580, label: FUN_001dcb60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-observed 0x001D5450 has no explicit stack parameters;
 * incoming guest registers and object layout remain ABI_UNVERIFIED. */
extern void FUN_001d5450(void);
int FUN_001dcb60(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_001d5450();
    in_EAX = in_EAX + 0x10;
  }
  return in_EAX;
}
