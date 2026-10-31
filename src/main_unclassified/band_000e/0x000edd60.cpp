/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 683C4F9009A1F7749DD66C70767444C3CAC6CEC1BC6B6E5B88B0CB111FB51CB5
 * Entry: 0x000edd60, Ghidra index: 2954, label: FUN_000edd60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-only C++17 declaration; Xbox register/stack ABI_UNVERIFIED. */
extern char FUN_000ed030(undefined4 param_1,int *param_2,undefined4 *param_3);
char FUN_000edd60(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int in_ECX;
  
  cVar1 = FUN_000ed030(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    uVar2 = *(undefined1 *)(in_ECX + 0x68);
    if (*param_2 == -0xced431) {
      if ((char)param_1 == '\0') {
        uVar2 = *(undefined1 *)param_3;
      }
      else {
        *(undefined1 *)param_3 = uVar2;
      }
      cVar1 = '\x01';
    }
    *(undefined1 *)(in_ECX + 0x68) = uVar2;
    if ((cVar1 == '\0') && (*param_2 == -0x7b9e237)) {
      if ((char)param_1 != '\0') {
        *param_3 = *(undefined4 *)(in_ECX + 100);
        return '\x01';
      }
      *(undefined4 *)(in_ECX + 100) = *param_3;
      cVar1 = '\x01';
    }
  }
  return cVar1;
}
