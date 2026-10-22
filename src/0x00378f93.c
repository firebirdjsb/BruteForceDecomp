/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B0AAA68B6E626B5A934076F3B18AE61265ED46AEAC4F8E98A28E3CC123B81CB
 * Entry: 0x00378f93, Ghidra index: 13476, label: FUN_00378f93
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00378f93(void)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int *in_EAX;
  
  iVar3 = *in_EAX;
  *(undefined1 *)(iVar3 + 0x6013d4) = 0x1f;
  cVar2 = *(char *)(iVar3 + 0x6013d5);
  *(undefined1 *)(iVar3 + 0x6013d4) = 0x1f;
  *(undefined1 *)(iVar3 + 0x6013d5) = 0x57;
  *(undefined1 *)(iVar3 + 0x6013d4) = 0x52;
  *(undefined1 *)(iVar3 + 0x6013d4) = 0x52;
  *(char *)(iVar3 + 0x6013d5) = *(char *)(iVar3 + 0x6013d5) + '\x04';
  *(uint *)(iVar3 + 0x8088) = *(uint *)(iVar3 + 0x8088) & 0xfffff43f | 0x400;
  *(uint *)(iVar3 + 0x8088) = *(uint *)(iVar3 + 0x8088) & 0xf43fffff | 0x4000000;
  puVar1 = (uint *)(iVar3 + 0x808c);
  *puVar1 = *puVar1 & 0xfffff40f | 0x400;
  *puVar1 = *puVar1 & 0xf40fffff | 0x4000000;
  *(undefined1 *)(iVar3 + 0x6013d4) = 0x20;
  *(undefined1 *)(iVar3 + 0x6013d5) = 0x29;
  *(undefined1 *)(iVar3 + 0x6013d4) = 0x1b;
  *(undefined1 *)(iVar3 + 0x6013d5) = 5;
  *(uint *)(iVar3 + 0x600804) = *(uint *)(iVar3 + 0x600804) & 0xfffffffa | 2;
  if (cVar2 == '\0') {
    *(undefined1 *)(iVar3 + 0x6013d4) = 0x1f;
    *(undefined1 *)(iVar3 + 0x6013d5) = 0x99;
  }
  return;
}
