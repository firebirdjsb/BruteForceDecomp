/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ED42E83941D1F0EB0B02BE5F81D36EA54FE7803FC4ED870005A25C3091934935
 * Entry: 0x0026b770, Ghidra index: 8766, label: FUN_0026b770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
void FUN_0026b770(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *unaff_ESI;
  undefined1 local_c [12];
  
  iVar3 = FUN_0026b210();
  if ((iVar3 == 0) || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar3 * 0x10) != -6)) {
    puVar4 = (undefined4 *)FUN_0026b2e0(local_c);
    uVar1 = puVar4[2];
    uVar2 = puVar4[1];
    *unaff_ESI = *puVar4;
    unaff_ESI[1] = uVar2;
    unaff_ESI[2] = uVar1;
  }
  return;
}
