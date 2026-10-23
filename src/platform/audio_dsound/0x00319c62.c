/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8957AE2A51444F6708CF981C5F111BF116E1E4CAC3545CA2F2839FFEE67893D1
 * Entry: 0x00319c62, Ghidra index: 12248, label: FUN_00319c62
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f6e8;
/* XBE 0x319c72/9a/c0 use [0x0032f690] as an x87 f32 operand. */
extern float _DAT_0032f690;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00319c62(float param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  float *pfVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  pfVar2 = (float *)&DAT_0032f6e8;
  puVar3 = (undefined4 *)(in_ECX + 0x168);
  do {
    iVar4 = 2;
    do {
      uVar5 = FUN_00319a67(_DAT_0032f690 * *pfVar2 * param_1);
      *puVar3 = (int)uVar5;
      pfVar2 = (float *)((int)((ulonglong)uVar5 >> 0x20) + 4);
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  } while ((int)pfVar2 < 0x32f708);
  uVar1 = FUN_00319a67(_DAT_0032f690 * param_1 * 0.2);
  *(undefined4 *)(extraout_ECX + 0x18c) = uVar1;
  uVar1 = FUN_00319a67((1.0 - param_1) * _DAT_0032f690);
  *(undefined4 *)(extraout_ECX_00 + 0x188) = uVar1;
  return;
}
