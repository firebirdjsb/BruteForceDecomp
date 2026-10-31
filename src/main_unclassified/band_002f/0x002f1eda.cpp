/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12FC2953DC031CF32087B709FB7B0A2689A3563A6D74225D98C9F614C4EE74E4
 * Entry: 0x002f1eda, Ghidra index: 10793, label: FUN_002f1eda
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declarations; direct CALL targets checked against the pinned XBE.
 * ABI_UNVERIFIED: source signatures are not recovered Xbox/native interfaces.
 */
extern void ___add_12(undefined4 *param_1,undefined4 *param_2);
extern void ___shl_12(uint *param_1);
void FUN_002f1eda(char *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar1 = param_3;
  local_8 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_14 = *puVar1;
      local_10 = puVar1[1];
      local_c = puVar1[2];
      ___shl_12(puVar1);
      ___shl_12(puVar1);
      ___add_12(puVar1,&local_14);
      ___shl_12(puVar1);
      local_14 = (uint)*param_1;
      local_10 = 0;
      local_c = 0;
      ___add_12(puVar1,&local_14);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  if (puVar1[2] == 0) {
    do {
      local_8 = local_8 + 0xfff0;
      uVar2 = puVar1[1] >> 0x10;
      puVar1[1] = *puVar1 >> 0x10 | puVar1[1] << 0x10;
      *puVar1 = *puVar1 << 0x10;
    } while (uVar2 == 0);
    puVar1[2] = uVar2;
  }
  while ((puVar1[2] & 0x8000) == 0) {
    ___shl_12(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}
