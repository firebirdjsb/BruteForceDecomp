/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6619FEF9A870917CF231C41F6F77D0C9244906C7EB47AE1C131D3CDBB80549B9
 * Entry: 0x00165970, Ghidra index: 4703, label: FUN_00165970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration of FUN_00164a90; callback ABI and behavior remain
 * ABI_UNVERIFIED. This only resolves name lookup in the C11 draft. */
extern void FUN_00164a90(void);
void FUN_00165970(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  iVar1 = in_EAX + 0x8a80;
  iVar2 = 0x1b;
  do {
    iVar1 = iVar1 + -0x520;
    FUN_0001fe00(iVar1,0x18,0x13,FUN_00164a90);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
