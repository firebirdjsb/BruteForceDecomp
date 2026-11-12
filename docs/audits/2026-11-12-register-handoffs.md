# Retail EAX, ESI and EDX call bindings

Fourteen original-address C++ drafts omitted operands needed by three existing
guest models. The retail XBE authenticated to
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The [handoff manifest](../../metadata/cpp_register_handoffs_20261112.json)
records original caller and callee digests, selected ranges and instruction
windows.

- Eight callers of `0x000120F0` now supply the original EAX DWORD. Three
  transfer an incoming EDI or ESI value, four load and adjust the first
  stack DWORD, and `0x00048360` uses the second stack DWORD. Its EBX reload
  at `0x000486CC` reaches the same stack slot after two observed
  `0x000428C0` calls, whose five decoded exits use `RET 4`.
- Five callers of `0x0008F6A0` pass both the original ESI and the pushed
  DWORD. The two range loops keep the original destination and source
  comparison loads in order and reuse the loaded source word for the call.
- At `0x000C8B1B`, the EDX argument to `0x0008F6E0` is the table base
  loaded from `[ESI+0x8C]` plus the scaled DWORD offset from the caller's
  stack. The draft now retains that computed guest address for the call.

The source changes preserve the callers' existing signatures. The checker
replays the original evidence with an optional private `--xbe` argument and
checks the changed callers at Clang C++17 `-O0` and `-O2`. Removing each
new argument list must recreate a compiler diagnostic. The checks leave
register initialization, memory translation, indirect calls, guest stack
aliasing and whole-function behavior under `ABI_UNVERIFIED`.
