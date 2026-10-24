/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47979EAF495E56A3E2F9CEB668BEA6A955706B462D7D0969438EBC3C942F059F
 * Entry: 0x000944a0, Ghidra index: 1813, label: FUN_000944a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_000944a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  /* Both LEA ECX,[ESP+0x14] sites address the original first incoming
   * guest stack DWORD. The two MOV [ESP+0x1c] instructions overwrite
   * that SAME word with different 32-bit keys before each callback.
   * Caller-visible stack aliasing and indirect-call ABI are unverified. */
  uint32_t guest_first_word;
  
  piVar3 = param_1;
  cVar4 = FUN_00090930(param_1);
  if (cVar4 != '\0') {
    guest_first_word = 0x0b85cb09U;
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x50))(piVar3,&guest_first_word);
    iVar2 = piVar3[3];
    piVar1 = piVar3 + 3;
    uVar6 = FUN_00220dd0(*puVar5);
    (**(code **)(iVar2 + 0x20))(piVar1,uVar6);
    guest_first_word = 0x108c9ab3U;
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x50))(piVar3,&guest_first_word);
    iVar2 = *piVar1;
    uVar6 = FUN_00220dd0(*puVar5);
    (**(code **)(iVar2 + 0x20))(piVar1,uVar6);
  }
  return cVar4;
}
