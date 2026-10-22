/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5560E8FD184AB033D0CDD60B8F33A7EA132659129F36529F16519CD91FDA45E0
 * Entry: 0x0034204d, Ghidra index: 12685, label: FUN_0034204d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0034204d(int param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined2 *)param_2 = 2;
  *(undefined2 *)((int)param_2 + 2) = 0x5000;
  *param_3 = 0;
  iVar2 = __strnicmp(param_1,"http://",7);
  if (iVar2 != 0) {
    return -0x7feae6e8;
  }
  pcVar5 = (char *)(param_1 + 8);
  while( true ) {
    if ((((*pcVar5 == '\0') || (cVar1 = *pcVar5, cVar1 == '/')) || (cVar1 == '?')) ||
       ((cVar1 == '=' || (cVar1 == '#')))) goto LAB_003420f1;
    if (cVar1 == ':') break;
    pcVar5 = pcVar5 + 1;
  }
  for (pcVar4 = pcVar5 + 1; ('/' < *pcVar4 && (*pcVar4 < ':')); pcVar4 = pcVar4 + 1) {
  }
  cVar1 = *pcVar4;
  *pcVar4 = '\0';
  lVar3 = _atol(pcVar5 + 1);
  *(ushort *)((int)param_2 + 2) = CONCAT11((char)lVar3,(char)((uint)lVar3 >> 8));
  *pcVar4 = cVar1;
  *param_3 = (int)pcVar4;
LAB_003420f1:
  cVar1 = *pcVar5;
  *pcVar5 = '\0';
  if (*param_3 == 0) {
    *param_3 = (int)pcVar5;
  }
  iVar2 = FUN_00345c6f(param_1 + 7);
  param_2[1] = iVar2;
  *pcVar5 = cVar1;
  return (-(uint)(iVar2 != 0) & 0x7feae6e8) + 0x80151918;
}
