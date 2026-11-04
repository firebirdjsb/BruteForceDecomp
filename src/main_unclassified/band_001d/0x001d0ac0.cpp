/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 96BDBC831BFA509B1C558B153AF6EF61B4172ADA0D16BA459B5CDAB4ACFC1056
 * Entry: 0x001d0ac0, Ghidra index: 6201, label: FUN_001d0ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-observed 0x001D2840 has no explicit stack parameters;
 * incoming guest registers and object layout remain ABI_UNVERIFIED. */
extern void FUN_001d2840(void);
void FUN_001d0ac0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x88) {
    FUN_001d2840();
  }
  return;
}
