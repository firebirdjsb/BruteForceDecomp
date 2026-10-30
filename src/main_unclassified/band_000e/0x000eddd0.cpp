/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9690E482426C8C7CA8BB1A1DE3DA1AB58FAF53B97FCFEB2EED84F320F3543CC6
 * Entry: 0x000eddd0, Ghidra index: 2955, label: FUN_000eddd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_000eddd0(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  /* 0x0eddec/0x0ede10 reuse a byte of the input stack slot;
   * only its byte result is subsequently returned in AL (0x0ede86).
   * The pointer is retained in EBP; no pointer word is reconstructed. */
  char result;
  int in_ECX;
  
  puVar3 = param_3;
  piVar2 = param_2;
  uVar1 = param_1;
  cVar4 = FUN_000ecdc0(param_1,param_2,param_3);
  result = cVar4;
  if (cVar4 == '\0') {
    result = '\0';
    if (*piVar2 == -0x1615f394) {
      if ((char)uVar1 == '\0') {
        *(undefined4 *)(in_ECX + 0x50) = *puVar3;
      }
      else {
        *puVar3 = *(undefined4 *)(in_ECX + 0x50);
      }
      result = '\x01';
    }
    param_1 = 0x149d28a7;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),uVar1,&param_1,piVar2,2);
    param_1 = 0x179b65f2;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),uVar1,&param_1,param_2,2);
    param_1 = 0xe52ed2a8;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),uVar1,&param_1,param_2,3);
  }
  return result;
}
