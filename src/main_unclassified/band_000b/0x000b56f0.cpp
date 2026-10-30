/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4971C8E62BAE61CFBF3ECDEFAEB6008B41EE8D61AD43B065826F56F66999E908
 * Entry: 0x000b56f0, Ghidra index: 2188, label: FUN_000b56f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_000b56f0(int param_1,int param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  int unaff_retaddr;
  
  *(int *)(param_1 + 0xbc) = param_2;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_2 + 0x14) == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = (char)((*(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x14)) / 0x1c);
  }
  if (*(int *)(param_2 + 0x24) == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (char)(*(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x24) >> 2);
  }
  *(char *)(param_1 + 0x83) = cVar4 + cVar2;
  iVar3 = FUN_002ebf10();
  *(float *)(param_1 + 0x84) = (float)iVar3 * *(float *)(param_2 + 8) + *(float *)(param_2 + 4);
  FUN_000bb9d0(*(undefined4 *)(param_1 + 100));
  (**(code **)(**(int **)(param_1 + 100) + 0x14))(0x3f800000);
  *(byte *)(unaff_retaddr + 0x80) =
       *(byte *)(unaff_retaddr + 0x80) ^
       ((*(int *)(param_1 + 0xc) != DAT_0046d064) << 1 ^ *(byte *)(unaff_retaddr + 0x80)) & 2;
  *(undefined1 *)(unaff_retaddr + 0x81) = 0;
  *(undefined1 *)(unaff_retaddr + 0x82) = 0;
  FUN_000b5930(unaff_retaddr);
  if (*(int *)(unaff_retaddr + 0xc0) != 1) {
    *(undefined4 *)(unaff_retaddr + 0xc0) = 1;
    pbVar1 = (byte *)(*(int *)(unaff_retaddr + 100) + 0x13);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)(*(int *)(unaff_retaddr + 0x68) + 0x13);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)(*(int *)(unaff_retaddr + 0x6c) + 0x13);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)(*(int *)(unaff_retaddr + 0x70) + 0x13);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)(*(int *)(unaff_retaddr + 0x74) + 0x13);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)(*(int *)(unaff_retaddr + 0x78) + 0x13);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)(*(int *)(unaff_retaddr + 0x7c) + 0x13);
    *pbVar1 = *pbVar1 | 1;
    *(undefined4 *)(unaff_retaddr + 0x88) = 0;
    *(undefined4 *)(unaff_retaddr + 0xbc) = 0;
    *(undefined1 *)(unaff_retaddr + 0x82) = 0;
    *(undefined1 *)(unaff_retaddr + 0x83) = 0;
    *(undefined1 *)(unaff_retaddr + 0x81) = 0;
  }
  if (*(int *)(unaff_retaddr + 0xc0) != 3) {
    *(undefined4 *)(unaff_retaddr + 0xc0) = 3;
    *(byte *)(*(int *)(unaff_retaddr + 100) + 0x13) =
         *(byte *)(*(int *)(unaff_retaddr + 100) + 0x13) & 0xfe;
    pbVar1 = (byte *)(*(int *)(unaff_retaddr + 0x68) + 0x13);
    *pbVar1 = *pbVar1 & 0xfe;
    pbVar1 = (byte *)(*(int *)(unaff_retaddr + 0x6c) + 0x13);
    *pbVar1 = *pbVar1 & 0xfe;
    pbVar1 = (byte *)(*(int *)(unaff_retaddr + 0x70) + 0x13);
    *pbVar1 = *pbVar1 & 0xfe;
    pbVar1 = (byte *)(*(int *)(unaff_retaddr + 0x74) + 0x13);
    *pbVar1 = *pbVar1 & 0xfe;
    pbVar1 = (byte *)(*(int *)(unaff_retaddr + 0x78) + 0x13);
    *pbVar1 = *pbVar1 & 0xfe;
    pbVar1 = (byte *)(*(int *)(unaff_retaddr + 0x7c) + 0x13);
    *pbVar1 = *pbVar1 & 0xfe;
    *(undefined4 *)(unaff_retaddr + 0x88) = 0;
  }
  return;
}
