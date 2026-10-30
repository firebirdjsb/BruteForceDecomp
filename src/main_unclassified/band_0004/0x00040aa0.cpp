/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A57AD006124BE844A301166945F2D7E9810A3DF3BEE63B49D8F703840E7ED0D6
 * Entry: 0x00040aa0, Ghidra index: 485, label: FUN_00040aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);

bool FUN_00040aa0(void)

{
  int iVar1;
  int in_ECX;
  bool bVar2;
  
  iVar1 = FUN_000120f0();
  bVar2 = (*(byte *)(*(int *)(iVar1 + 0xc) + 0x1a8) & 8) != 0;
  if (bVar2) {
    *(undefined1 *)(in_ECX + 0x874) = 0;
    *(undefined4 *)(in_ECX + 0x870) = 0;
    *(undefined4 *)(in_ECX + 0x878) = 0x1d;
    *(undefined4 *)(in_ECX + 0x880) = 6;
  }
  return bVar2;
}
