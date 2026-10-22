/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA36C858BBBD33F31E4FA0D2A7C332B3788423121A2CC2AFFD4CB7D61AAAE7CE
 * Entry: 0x00312f26, Ghidra index: 11989, label: CDirectSoundVoice_SetAllParameters
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 DSOUND__CDirectSoundVoice_SetAllParameters(int param_1,int param_2,byte param_3)

{
  ushort *puVar1;
  
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x10) =
       *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x14) =
       *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x18) =
       *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x1c) =
       *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x20) =
       *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x24) =
       *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x28) =
       *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x2c) =
       *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x30) =
       *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x34) =
       *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x38) =
       *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x3c) =
       *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x40) =
       *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x44) =
       *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x48) =
       *(undefined4 *)(param_2 + 0x48);
  puVar1 = (ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 0xb4) + 0x78);
  *puVar1 = *puVar1 | 0x1ff;
  if ((param_3 & 1) == 0) {
    CDirectSoundVoice_CommitDeferredSettings(param_1);
  }
  return 0;
}
