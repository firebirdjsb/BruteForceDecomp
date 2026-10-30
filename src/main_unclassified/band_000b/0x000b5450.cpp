/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B23BBEB1F67EDBC972D495410D4A7E293317B17D78F834E393063B59DA6042C3
 * Entry: 0x000b5450, Ghidra index: 2185, label: FUN_000b5450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b54;
extern uint32_t PTR_FUN_0039fd94;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000b5450(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *in_EAX;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_000b2230();
  *in_EAX = &PTR_FUN_0039fd94;
  in_EAX[0xb] = &PTR_LAB_0039fff0;
  in_EAX[0x19] = 0;
  puVar4 = in_EAX + 0x1a;
  for (iVar3 = 6; piVar2 = DAT_00469b54, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(byte *)(in_EAX + 0x20) = *(byte *)(in_EAX + 0x20) & 0xfe;
  in_EAX[0x21] = 0;
  in_EAX[0x22] = 0;
  iVar3 = (**(code **)(*piVar2 + 0x48))();
  in_EAX[0x23] = *(undefined4 *)(iVar3 + 0x1ac);
  in_EAX[0x24] = *(undefined4 *)(iVar3 + 0x1b0);
  in_EAX[0x25] = *(undefined4 *)(iVar3 + 0x1b4);
  in_EAX[0x26] = *(undefined4 *)(iVar3 + 0x1b8);
  in_EAX[0x27] = (float)in_EAX[0x25] * 6.0 + (float)in_EAX[0x24];
  in_EAX[0x28] = *(undefined4 *)(iVar3 + 0x1bc);
  in_EAX[0x29] = *(undefined4 *)(iVar3 + 0x1c0);
  in_EAX[0x2a] = *(undefined4 *)(iVar3 + 0x1c4);
  in_EAX[0x2b] = *(undefined4 *)(iVar3 + 0x1c8);
  in_EAX[0x2c] = (float)in_EAX[0x2a] * 6.0 + (float)in_EAX[0x29];
  in_EAX[0x2d] = *(undefined4 *)(iVar3 + 0x1a4);
  uVar1 = *(undefined4 *)(iVar3 + 0x1a8);
  *(byte *)(in_EAX + 0x20) = *(byte *)(in_EAX + 0x20) & 0xfd;
  in_EAX[0x2f] = 0;
  *(undefined1 *)((int)in_EAX + 0x81) = 0;
  in_EAX[0x30] = 0;
  in_EAX[0x2e] = uVar1;
  return;
}
