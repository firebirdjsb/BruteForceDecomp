/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40F5C33EEB87488B8FF00379EE795EC2B162565A8CDD2A60DB029A142DA3422F
 * Entry: 0x000e6cc0, Ghidra index: 2864, label: FUN_000e6cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bb5b0;
extern uint32_t DAT_003bb5c0;
uint FUN_000e6cc0(void)

{
  int iVar1;
  int *in_ECX;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_003bb5b0 != -1) {
    puVar2 = &DAT_003bb5b0;
    iVar1 = DAT_003bb5b0;
    do {
      if (iVar1 == *in_ECX) break;
      iVar1 = puVar2[0x18];
      puVar2 = puVar2 + 0x18;
      iVar3 = iVar3 + 1;
    } while (iVar1 != -1);
  }
  return (&DAT_003bb5c0)[iVar3 * 0x18] + 7 >> 3;
}
