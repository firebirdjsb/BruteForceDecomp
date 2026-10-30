/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78D23F06974E4BB8EB71588245C1201105608CC46F89876018CF0E6AE6747A49
 * Entry: 0x00091fe0, Ghidra index: 1793, label: FUN_00091fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_002385a0(void);
extern undefined4 FUN_000a4a60(int param_1);
extern void FUN_00091e60(int param_1);
extern undefined1 FUN_00091bc0(void);

undefined4 FUN_00091fe0(int param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  FUN_002385a0();
  FUN_000a4a60(2);
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 4);
  bVar1 = *(byte *)(param_1 + 0x3c);
  bVar4 = *(int *)(*(int *)(param_1 + 8) + 0x10) != 0;
  *(byte *)(param_1 + 0x3c) = bVar1 | 1;
  if (iVar2 == 0) {
    if (bVar4) {
      *(byte *)(param_1 + 0x3c) = bVar1 | 3;
      *(undefined1 *)(param_1 + 0x3d) = 1;
      FUN_00091e60(1);
      return 1;
    }
    *(byte *)(param_1 + 0x3c) = bVar1 & 0xfe;
    return 1;
  }
  if (bVar4) {
    *(undefined1 *)(param_1 + 0x3d) = 2;
    cVar3 = FUN_00091bc0();
    *(byte *)(param_1 + 0x3c) =
         *(byte *)(param_1 + 0x3c) ^ (cVar3 << 1 ^ *(byte *)(param_1 + 0x3c)) & 2;
    return 1;
  }
  *(byte *)(param_1 + 0x3c) = bVar1 | 3;
  *(undefined1 *)(param_1 + 0x3d) = 1;
  FUN_00091e60(0);
  return 1;
}
