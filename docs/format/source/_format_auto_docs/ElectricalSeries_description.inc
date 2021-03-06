.. _sec-ElectricalSeries:

ElectricalSeries
^^^^^^^^^^^^^^^^

**Extends:** :ref:`TimeSeries <sec-TimeSeries>`

**Source Specification:** see :numref:`sec-ElectricalSeries-src`

**Overview:** Stores acquired voltage data from extracellular recordings. The data field of an ElectricalSeries is an int or float array storing data in Volts. TimeSeries::data array structure: `[num times] [num channels] (or [num_times] for single electrode).`


``ElectricalSeries`` extends ``TimeSeries`` (see :numref:`sec-TimeSeries`) and includes all elements of :ref:`TimeSeries <sec-TimeSeries>` with the following additions or changes.



.. figure:: ./_format_auto_docs/ElectricalSeries.*
    :alt: ElectricalSeries




.. tabularcolumns:: |p{4cm}|p{1cm}|p{10cm}|
.. _table-ElectricalSeries-data:

.. table:: Datasets, Links, and Attributes contained in <ElectricalSeries>
    :class: longtable

    +----------------------+-------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | Id                   | Type        | Description                                                                                                                                                                                                                    |
    +======================+=============+================================================================================================================================================================================================================================+
    | <ElectricalSeries>   | group       | Top level group for <ElectricalSeries>                                                                                                                                                                                         |
    +----------------------+-------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | .help                | attribute   | Value is 'Stores acquired voltage data from extracellular recordings'                                                                                                                                                          |
    |                      |             |                                                                                                                                                                                                                                |
    |                      |             | - **Data Type:** text                                                                                                                                                                                                          |
    |                      |             | - **Value:** Stores acquired voltage data from extracellular recordings                                                                                                                                                        |
    |                      |             |                                                                                                                                                                                                                                |
    +----------------------+-------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | .data                | dataset     | Recorded voltage data.                                                                                                                                                                                                         |
    |                      |             |                                                                                                                                                                                                                                |
    |                      |             | - **Data Type:** number                                                                                                                                                                                                        |
    |                      |             | - **Dimensions:** [['num_times'], ['num_times', 'num_channels']]                                                                                                                                                               |
    |                      |             | - **Shape:** [[None], [None, None]]                                                                                                                                                                                            |
    |                      |             |                                                                                                                                                                                                                                |
    +----------------------+-------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | ..unit               | attribute   | The base unit of measure used to store data. This should be in the SI unit.                                                                                                                                                    |
    |                      |             |                                                                                                                                                                                                                                |
    |                      |             | **Comment:**  This is the SI unit (when appropriate) of the stored data, such as Volts. If the actual data is stored in millivolts, the field 'conversion' below describes how to convert the data to the specified SI unit.   |
    |                      |             |                                                                                                                                                                                                                                |
    |                      |             | - **Data Type:** text                                                                                                                                                                                                          |
    |                      |             | - **Default Value:** volt                                                                                                                                                                                                      |
    |                      |             |                                                                                                                                                                                                                                |
    +----------------------+-------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | .electrode_group     | link        | link to ElectrodeGroup group that generated this TimeSeries data                                                                                                                                                               |
    |                      |             |                                                                                                                                                                                                                                |
    |                      |             | - **Target Type** :ref:`ElectrodeGroup <sec-ElectrodeGroup>`                                                                                                                                                                   |
    |                      |             |                                                                                                                                                                                                                                |
    +----------------------+-------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+




.. tabularcolumns:: |p{4cm}|p{1cm}|p{10cm}|
.. _table-ElectricalSeries-groups:

.. table:: Groups contained in <ElectricalSeries>
    :class: longtable

    +----------------------+---------+--------------------------------------------------------------------+
    | Id                   | Type    | Description                                                        |
    +======================+=========+====================================================================+
    | <ElectricalSeries>   | group   | Top level group for <ElectricalSeries>                             |
    +----------------------+---------+--------------------------------------------------------------------+
    | .electrode_group     | link    | link to ElectrodeGroup group that generated this TimeSeries data   |
    |                      |         |                                                                    |
    |                      |         | - **Target Type** :ref:`ElectrodeGroup <sec-ElectrodeGroup>`       |
    |                      |         |                                                                    |
    +----------------------+---------+--------------------------------------------------------------------+


