/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D26B2A0F796594557ADC8FA929391A64A1B039114BE12978E9A94C791A1F57F0
 * Entry: 0x002c4520, Ghidra index: 10055, label: FUN_002c4520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c4520(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int unaff_ESI;
  /* 0x2C4520 reserves 0x54 bytes. After three register saves, LEA
   * [ESP+0x0C] addresses that exact local allocation. This is opaque raw
   * storage, not a guessed callback structure. Only observed words below
   * are initialized; callback-written lanes and unused bytes stay unknown. */
  uint32_t local_frame[21];
  uint32_t retained_word;
  
  iVar1 = *(int *)(*(int *)(unaff_ESI + 0x10) + 0x14);
  puVar4 = (uint *)(*(uint *)(unaff_ESI + 0x18) & 0xfffffff0);
  (**(code **)(**(int **)(*(int *)(unaff_ESI + 0x10) + 0x7c) + 0x20))
            (puVar4 + ((*puVar4 & 0xfff) + 1) * -4);
  puVar4 = (uint *)(*(uint *)(unaff_ESI + 0x2c) & 0xfffffff0);
  (**(code **)(**(int **)(*(int *)(unaff_ESI + 0x24) + 0x7c) + 0x20))
            (puVar4 + ((*puVar4 & 0xfff) + 1) * -4);
  iVar2 = *(int *)(unaff_ESI + 0x10);
  iVar3 = *(int *)(unaff_ESI + 0x24);
  /* 0x2C4571..0x2C45A6, relative to the LEA's frame base:
   * +18/+28/+38: zero DWORDs; +44/+48: raw incoming words;
   * +00/+08/+3C/+40: retained register words; +04: address of +0C.
   * uint32_t pointer words require a mapped 32-bit guest stack. Ordinary
   * host local addresses are only ABI_UNVERIFIED proxies for that stack. */
  retained_word = *(uint32_t *)(unaff_ESI + 0x2c);
  local_frame[6] = 0;
  local_frame[10] = 0;
  local_frame[14] = 0;
  local_frame[17] = *(uint32_t *)(unaff_ESI + 0x18);
  local_frame[0] = (uint32_t)iVar1;
  local_frame[15] = (uint32_t)iVar2;
  local_frame[16] = (uint32_t)iVar3;
  local_frame[18] = retained_word;
  local_frame[1] = (uint32_t)(uintptr_t)(local_frame + 3);
  local_frame[2] = (uint32_t)unaff_ESI;
  /* Original helper and both conditional callbacks receive the SAME base.
   * Their implicit register inputs and complete interfaces remain unverified. */
  FUN_002b5590((uint32_t)(uintptr_t)local_frame);
  if ((*(uint *)(iVar2 + 0x70) & 0x2000) != 0) {
    FUN_002bccd0(*(undefined4 *)(iVar1 + 0xc),iVar2,(uint32_t)(uintptr_t)local_frame);
  }
  if ((*(uint *)(iVar3 + 0x70) & 0x2000) != 0) {
    FUN_002bccd0(*(undefined4 *)(iVar1 + 0xc),iVar3,(uint32_t)(uintptr_t)local_frame);
  }
  if (*(int *)(unaff_ESI + 8) != 0) {
    *(undefined4 *)(*(int *)(unaff_ESI + 8) + 4) = *(undefined4 *)(unaff_ESI + 0xc);
  }
  if (*(undefined4 **)(unaff_ESI + 0xc) == (undefined4 *)0x0) {
    *(undefined4 *)(*(int *)(unaff_ESI + 0x10) + 0x24) = *(undefined4 *)(unaff_ESI + 8);
  }
  else {
    **(undefined4 **)(unaff_ESI + 0xc) = *(undefined4 *)(unaff_ESI + 8);
  }
  if (*(int *)(unaff_ESI + 0x1c) != 0) {
    *(undefined4 *)(*(int *)(unaff_ESI + 0x1c) + 4) = *(undefined4 *)(unaff_ESI + 0x20);
  }
  if (*(undefined4 **)(unaff_ESI + 0x20) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
    return;
  }
  *(undefined4 *)(*(int *)(unaff_ESI + 0x24) + 0x24) = *(undefined4 *)(unaff_ESI + 0x1c);
  return;
}
