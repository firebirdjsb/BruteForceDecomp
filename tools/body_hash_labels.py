#!/usr/bin/env python3
"""Read source-embedded original x86 body hashes; do not infer code equivalence.

These labels come from independently generated original-XBE hash inventories and
historical Ghidra C11 export formats. Matching a label to the inventory is a
provenance check, NOT validation that the C implementation matches the binary.
"""
from __future__ import annotations

import re

BODY_HASH_RE = re.compile(
    r"(?:Input x86 body SHA-256|Original body SHA-256|Ghidra function-body SHA-256)"
    r":\s*([0-9A-Fa-f]{64})(?![0-9A-Fa-f])"
)


def read_body_digest(source: str) -> tuple[str | None, bool]:
    """Return (uppercase digest or None, conflicting_label_digests).

    Multiple identical body hashes are acceptable; conflicting source labels
    fail closed instead of allowing a matching first label to mask the rest.
    """
    digests = {m.upper() for m in BODY_HASH_RE.findall(source)}
    if not digests:
        return None, False
    if len(digests) != 1:
        return None, True
    return next(iter(digests)), False
