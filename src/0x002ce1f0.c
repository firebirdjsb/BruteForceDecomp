/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C12629F85C0BFB070EBF915709607BEF28C30CC45065C23897C21D4A18A146F2
 * Entry: 0x002ce1f0, Ghidra index: 10177, label: FUN_002ce1f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0038e520;
void FUN_002ce1f0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  unaff_ESI[3] = unaff_ESI + 5;
  *(undefined2 *)(unaff_ESI + 2) = 2;
  *(undefined2 *)((int)unaff_ESI + 10) = 0;
  *(undefined2 *)(unaff_ESI + 4) = 0;
  unaff_ESI[1] = unaff_ESI[1] & 0xfffffffd | 1;
  *unaff_ESI = &PTR_LAB_0038e520;
  puVar1 = unaff_ESI + 0x1f;
  iVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  unaff_ESI[0x2b] = 0;
  unaff_ESI[0x2d] = 0;
  puVar1 = unaff_ESI + 0x31;
  iVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  unaff_ESI[0x3d] = 0;
  unaff_ESI[0x3f] = 0;
  *(undefined1 *)(unaff_ESI + 0x40) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x101) = 1;
  *(undefined1 *)((int)unaff_ESI + 0x102) = 2;
  *(undefined1 *)((int)unaff_ESI + 0x103) = 0;
  *(undefined1 *)(unaff_ESI + 0x41) = 1;
  *(undefined1 *)((int)unaff_ESI + 0x105) = 2;
  FUN_002ce4b0(unaff_ESI,param_1);
  if ((unaff_ESI[1] & 3) == 0) {
    unaff_ESI[1] = unaff_ESI[1] & 0xfffffffd | 1;
    FUN_002bde70(*(undefined4 *)(*(int *)(*(int *)unaff_ESI[3] + 0xc) + 0x98),unaff_ESI);
  }
  return;
}
