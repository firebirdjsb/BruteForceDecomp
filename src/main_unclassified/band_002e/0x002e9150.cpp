/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEE7E7E41A61AAA449686096A84AAB59F354CEB0476DCE02F260F26AB7608BBC
 * Entry: 0x002e9150, Ghidra index: 10551, label: FUN_002e9150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e9150(char *param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  char *pcVar3;
  
  pcVar3 = param_1;
  do {
    (**(code **)(*in_ECX + 0x18))(pcVar3);
    if ((in_ECX[3] < 0) || (cVar1 = *pcVar3, cVar1 == '\n')) break;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  *pcVar3 = '\0';
  iVar2 = in_ECX[3];
  if ((iVar2 == -0x7ff8ffda) && (param_1 != pcVar3)) {
    iVar2 = 0;
  }
  return iVar2;
}
