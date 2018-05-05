import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import Vi 1.0

ApplicationWindow {
    visible: true
    width: 900
    height: 800


    Vi
    {
        id: vintic
    }

    ListView
    {
        id: vinti
        visible: true
        orientation: ListView.Vertical
        model: vintic.vinny()
        anchors.fill: parent
        delegate:

    Button
    {
        id: vint
        height: 190
        x: vintic.x()
        background:
            Image
            {
                source: "Bloh.jpg"
                width: 150
                height: 185
            }
    }
}
}
