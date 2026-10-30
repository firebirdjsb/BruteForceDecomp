/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 673E728D93BDCB7BAE39DD7D228F5DFE9FDD078E09880B3698626DBBF21A6E6F
 * Entry: 0x00155340, Ghidra index: 4462, label: FUN_00155340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040c8bc;
extern uint32_t DAT_004699a4;
extern uint32_t PTR_FUN_0039acb8;
void FUN_00155340(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_ESI;
  undefined1 local_20 [32];
  
  iVar1 = DAT_004699a4;
  unaff_ESI[1] = 0;
  DAT_004699a4 = DAT_004699a4 + 1;
  *unaff_ESI = &PTR_FUN_0039acb8;
  unaff_ESI[5] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[3] = 0;
  FUN_002eaa86(local_20,&DAT_0040c8bc,iVar1);
  uVar3 = FUN_002383b0();
  unaff_ESI[1] = uVar3;
  uVar2 = FUN_00155450();
  *(undefined2 *)((int)unaff_ESI + 0x22) = uVar2;
  unaff_ESI[4] = 0;
  unaff_ESI[7] = 0;
  *(undefined2 *)(unaff_ESI + 9) = 0;
  unaff_ESI[2] = 0;
  *(byte *)((int)unaff_ESI + 0x27) = *(byte *)((int)unaff_ESI + 0x27) & 0xfe;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x10] = 0x3f800000;
  unaff_ESI[6] = 0xffffffff;
  *(undefined2 *)(unaff_ESI + 8) = 0xffff;
  *(undefined1 *)((int)unaff_ESI + 0x26) = 0x20;
  return;
}
