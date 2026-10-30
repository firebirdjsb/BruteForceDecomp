/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B29B4DC194C3130F5EBBC12106620CAA6B1F4D9F680B5D5E625B7C2CB4C2EE94
 * Entry: 0x00179110, Ghidra index: 4981, label: FUN_00179110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00399dac;
void FUN_00179110(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  undefined4 *puVar3;
  
  *unaff_ESI = PTR_FUN_00399dac;
  puVar3 = unaff_ESI + 2;
  iVar2 = 2;
  do {
    uVar1 = FUN_0017a2f0(puVar3);
    puVar3[1] = uVar1;
    puVar3[2] = 0;
    puVar3 = puVar3 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar1 = FUN_001fad20(unaff_ESI + 10);
  unaff_ESI[0xb] = uVar1;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0x13] = param_1;
  *(byte *)(unaff_ESI + 0x11) = *(byte *)(unaff_ESI + 0x11) & 0xfe;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0x10] = 0;
  unaff_ESI[8] = unaff_ESI + 2;
  unaff_ESI[0x12] = 1;
  *(byte *)(unaff_ESI + 1) = *(byte *)(unaff_ESI + 1) & 0xf3 | 3;
  unaff_ESI[9] = unaff_ESI + 5;
  return;
}
